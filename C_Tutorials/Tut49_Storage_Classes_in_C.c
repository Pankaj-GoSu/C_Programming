/*
Author : Pankaj Goswami
Purpose : Storage Class in C
Date: 11/01/2022
*/

/*
==>  A Storage class define scope, default initial value & lifetime of a variable.
scope - Kaha pr variable available hoga.
lifetime - Kab tak variable available hoga.
*/

/*
In C language, following storage classes are most oftenly used:
1- Automatic Variables
2- External Variables
3- Static Variables
4- Register Variables

1- Automatic Variable : Auto Storage class
    1- Scope : Local to the function body they are defined in.
    2- Default Value : Garbage value (Random Value)
    3- Lifetime : Till the end of the function block they are defined in.
# A variable defined without any storage class specification is by default an automatic variable
=> int pankaj and auto int pankaj are same.

2- External Variable : External Storage class.
    1- They are same as global variables
    2- Scope : Global to the program they are defined in
    3- Default initial value: 0
    4- Lifetime : These variables are declared outside any function,available throughout 
        the life time of program.
    => A global variable can be changed by any function in the program.

==>>> Extern Keyword:
      1- extern keyword is used to inform our C compiler that a given variable is declared 
      somewhere else.
      2- Using extern will not allocate space for the variable

3- Static Variables : Static Storage class.

    1- Scope : Local to the block they are defined in.
    2- Default initial Value : 0;
    3- Lifetime : Available throughout the lifetime of the program.


4 - Register Variables : Register Storage Class.
    1- Scope : Local to the function they are declared in.
    2- Default Initial value : Garbage Value.
    3- Lifetime : Available till the end of the function block.
    ==> Register variable requests the compiler to store the variable in the 
        CPU register instead of storing in the memory to have Faster Access.
    ==> Generally this is done for the variable which are being used frequently. 

Syntax : just write : register data_type variable_name
*/

#include <stdio.h>
#include <stdlib.h>
#include "temp.c"

// int sum;
int myfunc(int a, int b)
{
    // auto int sum = a+b;
    extern int sum; // using extern keyword we can use global sum variable inside fucntion.
    // sum = a+b;
    return  sum;
}

int sum = 666;

int main()
{
    // Declaration : Telling the compiler about the varible (No space reserved)
    // Defination :  Declaration + space reservation.
    int sum = myfunc(3,4);
    func();
    
    printf("\nThe sum is %d\n",sum);

return 0;
}


