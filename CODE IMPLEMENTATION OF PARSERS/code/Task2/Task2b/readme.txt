# README for LR(0) Parsing Table Computation

## Project Description
This project features a Python implementation for constructing LR(0) parsing tables. The program reads context-free grammars from a file and computes the canonical collection of LR(0) items, action tables, and goto tables. These are essential components in constructing LR(0) parsers, commonly used in compiler design.

## How to Run the Code
1. *Requirements:* Ensure Python 3.x is installed on your system.
2. *Setting Up:* Download or clone the Python script to a directory of your choice.
3. *Input Grammar:* Create a text file named `grammar.txt` in the same directory. Input your grammar in this file, with each production on a new line (e.g., `A -> B C`).
4. *Running the Program:* Execute the script in a terminal or command prompt with the command `python task 2a.py`.
5. *Viewing Results:* The LR(0) action and goto tables for the grammar will be printed to the console.

## Input File Format
- The grammar should be in a file named `grammar.txt` in the same directory as the script.
- Format each production on a new line as `NonTerminal -> Production`.
- Example content for `grammar.txt`:
  
  S' -> S
  S -> C C
  C -> c C
  C -> d
  

## Functions Description
- `read_grammar(file_path)`: Reads the grammar from a file and formats it into a dictionary.
- `closure(items, grammar)`: Computes the closure of a set of LR(0) items.
- `goto(items, symbol, grammar)`: Computes the goto of a set of items on a symbol.
- `canonical_collection(grammar)`: Computes the canonical collection of LR(0) items for the grammar.
- `lr0_parsing_table(grammar)`: Generates the LR(0) parsing action and goto tables.

## Example Usage
1. Write your grammar in `grammar.txt`.
2. Run the script.
3. Review the action and goto tables output in the console.

## Notes
- Ensure that the grammar in `grammar.txt` follows the specified format.
- The script is intended for grammars without left recursion and epsilon productions.