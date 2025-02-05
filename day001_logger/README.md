# Simple Logger

Functions for printing debugging information.

## What information do we need?

Useful debugging information reports (1) where the error occurred and (2) descriptive information about the error condition. 

- File name  
- Function name  
- Line number  
- Descriptive message and data

## Example 1  

Example 1 uses print debugging to show program flow and report error conditions. Build and run the program with the following command:

```bash
g++ -Wall -o example1 example1.cpp && ./example1
```

## Example 2

Example 2 



## Expand Macro 

In C, you can see how a macro expands using the following methods:
1. Use the C Preprocessor (cpp) command. 

  ```cpp -E your_file.c > output.c```  

  This command will preprocess your_file.c, expanding all macros, and write the result to output.c.  

2. Use the gcc Compiler

```gcc -E your_file.c```  

This command will also preprocess the file and print the output to the console.  

3. Using a Debugger (e.g., gdb)  

```gdb your_program```  

Inside gdb: macro expand expression
This command will show you the result of expanding the macro in the given expression.



## -DDEBUG

https://www.cs.colostate.edu/~fsieker/misc/debug/DEBUG.html 