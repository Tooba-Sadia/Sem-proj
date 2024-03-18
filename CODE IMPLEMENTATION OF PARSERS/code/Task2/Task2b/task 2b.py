
def read_grammar(file_path):
    grammar = {}
    with open(file_path, 'r') as file:
        for line in file:
            head, production = line.strip().split('->')
            head = head.strip()
            production = production.strip()

            if head not in grammar:
                grammar[head] = []
            grammar[head].append(production)

    return grammar

def closure(items, grammar):
    closure_set = set(items)
    while True:
        new_items = closure_set.copy()
        for (head, body) in closure_set:
            dot_position = body.find('.')
            if dot_position + 1 < len(body):
                next_symbol = body[dot_position + 1]
                if next_symbol in grammar:  # Check if next symbol is non-terminal
                    for production in grammar[next_symbol]:
                        new_item = (next_symbol, '.' + ''.join(production))
                        new_items.add(new_item)
        if new_items == closure_set:
            break
        closure_set = new_items
    return closure_set

def goto(items, symbol, grammar):
    jump_items = set()
    for (head, body) in items:
        dot_position = body.find('.')
        if dot_position + 1 < len(body) and body[dot_position + 1] == symbol:
            moved_dot_item = body[:dot_position] + symbol + '.' + body[dot_position + 2:]
            jump_items.add((head, moved_dot_item))
    return closure(jump_items, grammar)

def canonical_collection(grammar):
    start_symbol = next(iter(grammar))
    start_item = (start_symbol, '.' + ''.join(grammar[start_symbol][0]))
    C = [closure({start_item}, grammar)]
    while True:
        new_C = C.copy()
        symbols = {sym for head in grammar for prod in grammar[head] for sym in prod}
        for I in C:
            for X in symbols:
                goto_set = goto(I, X, grammar)
                if goto_set and goto_set not in C:
                    new_C.append(goto_set)
        if new_C == C:
            break
        C = new_C
    return C

def lr0_parsing_table(grammar):
    states = canonical_collection(grammar)
    terminals = set(sym for head in grammar for prod in grammar[head] for sym in prod if sym not in grammar) | {'$'}
    action = [{} for _ in states]
    goto_table = [{} for _ in states]

    for i, I in enumerate(states):
        for (head, body) in I:
            dot_position = body.find('.')
            if dot_position < len(body) - 1:  # Shift
                symbol_after_dot = body[dot_position + 1]
                if symbol_after_dot in terminals:
                    j = states.index(goto(I, symbol_after_dot, grammar))
                    action[i][symbol_after_dot] = f'S{j}'
            elif dot_position == len(body) - 1 and head != 'S\'':  # Reduce
                for prod in grammar[head]:
                    if '.' + ''.join(prod) == body:
                        for terminal in terminals:
                            action[i][terminal] = f'R({head} -> {" ".join(prod)})'

        for symbol in grammar:
            if symbol != 'S\'':
                j = goto(I, symbol, grammar)
                if j in states:
                    goto_table[i][symbol] = states.index(j)

    return action, goto_table

# Example Grammar
'''
grammar = {
    'S\'': [['S']],
    'S': [['C', 'C']],
    'C': [['c', 'C'], ['d']]
}
'''
file_path = 'grammar.txt'  # Replace with your file path
grammar = read_grammar(file_path)

action_table, goto_table = lr0_parsing_table(grammar)

print("Action Table:")
for i, actions in enumerate(action_table):
    print(f"State {i}: {actions}")

print("\nGoto Table:")
for i, gotos in enumerate(goto_table):
    print(f"State {i}: {gotos}")

