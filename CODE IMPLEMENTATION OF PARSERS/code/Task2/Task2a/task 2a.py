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
        for item in closure_set:
            dot_position = item[1].index('.')
            if dot_position + 1 < len(item[1]):
                next_symbol = item[1][dot_position + 1]
                for production in grammar.get(next_symbol, []):
                    new_items.add((next_symbol, '.' + production))
        if new_items == closure_set:
            break
        closure_set = new_items
    return closure_set

def goto(items, symbol, grammar):
    jump_items = set()
    for item in items:
        dot_position = item[1].index('.')
        if dot_position + 1 < len(item[1]) and item[1][dot_position + 1] == symbol:
            moved_dot_item = item[1][:dot_position] + symbol + '.' + item[1][dot_position + 2:]
            jump_items.add((item[0], moved_dot_item))
    return closure(jump_items, grammar)

def canonical_collection(grammar):
    start_symbol = next(iter(grammar))
    start_item = (start_symbol, '.' + grammar[start_symbol][0])
    C = [closure({start_item}, grammar)]
    while True:
        new_C = C.copy()
        for I in C:
            for X in grammar.keys() | {symbol for prod in grammar.values() for symbol in prod}:
                goto_set = goto(I, X, grammar)
                if goto_set and goto_set not in C:
                    new_C.append(goto_set)
        if new_C == C:
            break
        C = new_C
    return C

# Example usage
file_path = 'grammar.txt'  # Replace with your file path
grammar = read_grammar(file_path)

# Compute the canonical collection
canonical_LR0 = canonical_collection(grammar)
print(canonical_LR0)



