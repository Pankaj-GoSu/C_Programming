/*
Author : Pankaj Goswami
Purpose : Wild Pointer in C
Date : 12/01/2022
*/

/*
Qu : What is a Wild Pointer ?
Ans :Uninitialized pointers are known as wild pointers
     These pointers point to some arbitary location in memory and may cause a 
     program to crash or behave badly.
     Dereferncing wild pointers can cause nasty bugs.


*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 3044;
    int *ptr ; // This is a Wild Pointer.
    // *ptr = 34; // This is not good thing to do.
    ptr =&a; // ptr is no longer a wild pointer.
    printf("The Value of a is %d\n",*ptr);
    return 0;
}

