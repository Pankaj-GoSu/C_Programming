// ======== Variables And Data Types In C =============


/*
=> Variable is a Name of storage area .
=> Flow of a C Program is : Preprocessing -> Compilation -> Assembly -> Linking -> Loading (load in RAM)

Qu- What is a Variable ?
Ans - A name given to a memory location
    Declared by wrting => type variable_name;
    Intitialized and declared by type variable_name = Value;
Qu- Rules for defining a variable in c
Ans - Can contains alphabets , digits and underscore(_) but can not start with a digit.
     And No keyword is allowed.

==> Data Types In C 
    Basic Data Type: int,char,float,double
    Derived Data Type: array,pointer,structure,union
    Enumeration Data Type : emum
    Void Data Type: void
    
==>> Basic Operators And Funtions 

######### 

We use printf() function with %d format specifier to display the value of an 
integer variable. Similarly %c is used to display character,
 %f for float variable, %s for string variable, %lf for double and %x for hexadecimal variable.

#########

printf() is used to display the output and scanf() is used to read the inputs.

*/

#include <stdio.h>

int main()

{
    printf("%lu",sizeof(char));
    return 0;
}

