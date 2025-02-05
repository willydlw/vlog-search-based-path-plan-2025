# Simple Logger

Functions for printing debugging information.

## What information do we need?

File name
Function name
Line number 
Descriptive message

## Example 1 


## Expand Macro 

In C, you can see how a macro expands using the following methods:
1. Using the C Preprocessor (cpp)
Command: cpp -E your_file.c > output.c
This command will preprocess your_file.c, expanding all macros, and write the result to output.c.
2. Using the gcc Compiler
Command: gcc -E your_file.c
This command will also preprocess the file and print the output to the console.
3. Using a Debugger (e.g., gdb)
Command: gdb your_program
Inside gdb: macro expand expression
This command will show you the result of expanding the macro in the given expression.



## -DDEBUG

https://www.cs.colostate.edu/~fsieker/misc/debug/DEBUG.html 