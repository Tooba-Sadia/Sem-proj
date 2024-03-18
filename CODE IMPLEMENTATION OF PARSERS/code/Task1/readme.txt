# README for First and Follow Sets Computation

## Project Description
This project provides a Python implementation for computing first and follow sets in context-free grammars. It is designed to read grammars from a text file and calculate the first and follow sets for each non-terminal in the grammar. This is a fundamental aspect of building parsers, particularly for compiler design.

## How to Run the Code
1. *Requirements:* Python 3.x installed on your system.
2. *Setting Up:* Download and save the Python script in your desired directory.
3. *Input Grammar:* Create a text file named `grammar.txt` in the same directory as the script. This file should contain your grammar, formatted with one production per line (e.g., `A -> B C`).
4. *Running the Program:* Open a terminal or command prompt, navigate to the directory containing the script and the grammar file, and execute the script using `python f1.py`.
5. *Viewing Results:* The first and follow sets for each non-terminal in the grammar will be printed to the console.

## Input File Format
- The grammar should be provided in a file named `grammar.txt`.
- Each production should be on a new line in the format: `NonTerminal -> Production`.
- Use `ε` to represent an empty string.
- Example:
  
  S -> A B
  A -> a
  B -> b
  

## Functions Description
- `read_grammar(file_path)`: Reads the grammar from a file and returns it in a dictionary format.
- `compute_first_set(grammar)`: Computes the first sets for the given grammar.
- `compute_follow_set(grammar, first_sets)`: Computes the follow sets for the given grammar, using the previously computed first sets.

## Example Usage
1. Prepare `grammar.txt` with your grammar.
2. Run the script.
3. Check the output in the console for the first and follow sets.

## Notes
- Ensure that the grammar provided in `grammar.txt` follows the specified format for correct results.
- The script currently handles grammars that do not have left recursion.