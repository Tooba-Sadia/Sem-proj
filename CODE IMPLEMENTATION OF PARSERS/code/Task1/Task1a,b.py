def read_grammar(file_path):
    grammar = {}
    with open(file_path, 'r') as file:
        for line in file:
            head, production = line.strip().split('->')
            head = head.strip()
            production = production.strip()

            if head not in grammar:
                grammar[head] = []
            grammar[head].append(production.split())

    return grammar


def compute_first_set(grammar):
    first = {key: set() for key in grammar}

    def first_of(symbol):
        if symbol not in grammar:  # Terminal symbol
            return {symbol}

        if first[symbol]:  # Already computed
            return first[symbol]

        for production in grammar[symbol]:
            for prod_symbol in production:
                first_of_symbol = first_of(prod_symbol)
                first[symbol].update(first_of_symbol - {'ε'})
                if 'ε' not in first_of_symbol:
                    break
            else:
                first[symbol].add('ε')
        return first[symbol]

    for non_terminal in grammar:
        first_of(non_terminal)

    return first

def compute_follow_set(grammar, first_sets):
    follow = {key: set() for key in grammar}
    start_symbol = next(iter(grammar))
    follow[start_symbol] = {'$'}  # EOF symbol

    while True:
        updated = False
        for non_terminal in grammar:
            for production in grammar[non_terminal]:
                for i, symbol in enumerate(production):
                    if symbol in grammar:  # If it's a non-terminal
                        first_of_next = first_sets[production[i + 1]] if i + 1 < len(production) else {'$'}
                        new_follow = first_of_next - {'ε'}
                        if 'ε' in first_of_next or i == len(production) - 1:
                            new_follow.update(follow[non_terminal])

                        if not follow[symbol].issuperset(new_follow):
                            follow[symbol].update(new_follow)
                            updated = True

        if not updated:
            break

    return follow

# Example usage
file_path = 'grammar.txt'  # Replace with your file path
grammar = read_grammar(file_path)

first_sets = compute_first_set(grammar)
follow_sets = compute_follow_set(grammar, first_sets)

print("First Sets:", first_sets)
print("Follow Sets:", follow_sets)
