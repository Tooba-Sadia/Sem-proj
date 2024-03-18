# README for LR(1) Parsing Table Computation

## Project Description
This Python program is designed to compute LR(1) parsing tables for a given context-free grammar. It includes a variety of functions such as closure calculation, GOTO operations, and identifying all grammar symbols. The program also computes the 'first' sets necessary for the parsing table computation. This tool is useful for understanding LR(1) parser construction, a key concept in compiler design.

## How to Run the Code
1. *Requirements:* Python 3.x installation.
2. *Setting Up:* Download the Python script to a directory of your choice.
3. *Input Grammar:* Modify the `gram` variable in the script to include your grammar rules. Make sure to follow the format shown in the script (e.g., 'A::=Bb').
4. *Running the Program:* Execute the script with `python <script_name>.py` in your terminal or command prompt.
5. *Viewing Results:* The script will output the LR(1) parsing table, including action and goto tables.

## Script Features
- *Grammar and Closure Computation:* The script starts by defining the grammar and computing closures.
- *GOTO Function:* Next, it computes GOTO for each state.
- *First Set Computation:* The 'first' sets for the grammar symbols are computed.
- *Parsing Table Creation:* Finally, it creates the LR(1) parsing table, considering shift and reduce actions.

## Customizing the Grammar
- Modify the `gram` variable directly in the script to include your grammar rules.
- Update the `first` set computation according to your grammar.
- Ensure that the grammar and the first set computations are consistent with each other.

## Example Usage
1. Change the `gram` variable to reflect your desired grammar.
2. Update the first set computation if necessary.
3. Run the script.
4. Review the output for the LR(1) parsing table.