# README for Bottom-Up Parsers Project
## Project Description
This project is focused on the implementation of bottom-up parsers. It includes various tasks 
that are crucial in understanding and constructing bottom-up parsers, such as computing first 
and follow sets for input grammar, creating canonical collections of LR(0), LR(1), CLR(1), and 
LALR(1) items, and implementing parsing tables for these parsers. The code is designed to parse 
any input with any given grammar, where the grammar should be provided in a text file.
## How to Run the Code
1. *Requirements:* Ensure you have a Python compiler installed on your system.
2. *Setting Up:* Download and unzip the project files to your local machine.
3. *Input Grammar:* Place your input grammar in a text file within the project directory.
4. *Running the Program:* Open a terminal or command prompt, navigate to the project 
directory, and run the respective Python scripts for each task. For example, `python first_sets.py` 
to compute first sets.
5. *Viewing Results:* The results will be displayed in the console or saved to an output file in the 
project directory (as per the specific script's design).
### Group Information
- Group Members:
 - Ehsan Ellahi (21-CS-49)
 - Hanzla Zahid (21-CS-24)
 - Tooba Sadia (21-CS-52)
## Member Contributions
-Tooba Sadia:* Focused on implementing the first and follow sets computation. Also contributed 
to writing the project documentation and testing the code.
- Hanzla Zahid:* Worked on the creation of canonical collections of LR(0) and LR(1) items, 
including extensive testing and debugging of the code.
-Ehsan Ellahi:* Developed the parsing tables for CLR(1) and LALR(1) parsers and assisted in 
integrating all parts of the project.
### File Structure
- code
 - Task_Name 
    - CodeFileName.py
    - readme.txt
 - global_readme.txt
 - hand_working.pdf
 - verification_screenshots.pdf
## Additional Notes
- The code is structured to be modular, allowing for easy testing and modification of individual 
components.
- For detailed understanding of each parser's implementation, refer to the comments and 
documentation within each script.