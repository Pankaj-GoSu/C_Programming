/*
Author : Pankaj Goswami
Purpose : Preprocessor in C.
Date : 15/01/2022
*/

/*
Compiler converts textual form of a C program into an executable. 
There are four phase for a C program to become an executable.

PreProcessing --> Compilation --> Assembly --> Linking.

In PreProcessing : Removal of comment
                   Expansion of macros
                   Expansion of include Files.


In Compilation :
                Assembly level instructions are generated.

In Assembly : printf like functions are not resolved
              Assembly language instructions are converted to machine code .(0,1)

In Linking :
            Function calls are Resolved here.
            Link the function implementation.

==>>> PreProcessor :
      C preprocessor ia not a part of the c compiler.
      It is a text substitution tool.
      All preprocessor command begin with hash symbol(#).

*/