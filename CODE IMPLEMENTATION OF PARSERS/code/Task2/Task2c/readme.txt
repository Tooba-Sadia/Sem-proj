# README for SLR(1) Parsing Table Computation

## Project Description
This Python program computes SLR(1) parsing tables for a given context-free grammar. It performs grammar augmentation, closure and goto operations, and generates states. Then, it creates parsing tables considering shift, reduce, and goto actions. This tool is essential for understanding and implementing SLR(1) parsers, widely used in compiler construction.

## How to Run the Code
1. *Requirements:* Python 3.x installation.
2. *Setting Up:* Download the Python script to your working directory.
3. *Input Grammar:* Write your grammar rules, non-terminal, and terminal symbols directly in the script under the "rules section." Follow the provided format in the script.
4. *Running the Program:* Run the script using `python task 2c.py` in your terminal or command prompt.
5. *Viewing Results:* The output will display the original grammar, augmented grammar, calculated closures, generated states, GOTO computation results, and the final SLR(1) parsing table.

## Script Structure
- *Grammar Augmentation:* The script starts by augmenting the given grammar.
- *Closure and GOTO Operations:* Next, it computes closures for each state and applies GOTO operations.
- *State Generation:* The script then generates states based on the closure and GOTO results.
- *Parsing Table Creation:* Finally, it creates the SLR(1) parsing table, including shift, reduce, and goto actions.

## Editing the Grammar
- Directly modify the `rules`, `nonterm_userdef`, and `term_userdef` variables in the script.
- Ensure that the `start_symbol` is correctly set as the first non-terminal symbol in your grammar.

## Example Usage
1. Modify the script to include your grammar.
2. Run the script.
3. Analyze the generated SLR(1) parsing table output.

## Notes
- The script is currently set up for demonstration with a sample grammar. Replace this with your grammar as needed.
- The script does not handle grammars with left recursion or epsilon productions.