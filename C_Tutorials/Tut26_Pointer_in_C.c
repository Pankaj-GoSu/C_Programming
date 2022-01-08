/*
Author : Pankaj Goswami
Purpose : Pointers In C.
Date : 08/01/2022.
*/

/*

Qu : What is a Pointer ?
Ans : Variable which stores the address of another variable.
      Can be of type int,array.function,or any other pointer
      In My knowledege Pointer is Like Indirect Addressing Mode.
      OR We can say pointer is like a data type which store address of another variable.

      ==> Pointer in C programming language can be declared using *(asterisk symbol)

==> & -> It Gives Address of any variable. like we use it in scanf("%d",&a) function.
if p store address of a than we can say : p points to a.

*/

/*
"&" And "* Operators" :
        The Address of operator "&" returns the address of a variable.
        * is the Dereference operator(also called indirection operator) used to get the value at a given address.
Example:
&a : it means address of a in memory. or physical address of a.


/*
NULL POINTER :
    A pointer that is not assigned any value but NULL is known as the NULL pointer .
    In computer programming a null pointer ia s pointer that does not point any object or function.
    We can use it to initialize a pointer variable when that pointer variable is not assigned any valid memory address yet.

    int *ptr = NULL;


#======= Uses of Pointer ==========

1) Dynamic memory allocation.
2) Arrays , Functions , and Structures.
3) Return multiple values from a function.
4) Pointer reduces the code and improves the performance.

*/

// #include <stdio.h>

// int main(){
//     int a=0,b;
//     printf("%d %d",&a,&b);
//     return 0;
// }

#include <stdio.h>

int main(){
    printf("Lets Learn about pointers \n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 =NULL ;
    printf("The address of a is %p \n",&a);
    printf("The address of a pointer to a is %p \n",&ptra);
    
    printf("The address of a is %p \n",ptra);
    printf("The value of a is %d \n",*ptra);
    printf("The value of a is %d \n",a);
    
    printf("Address of some garbage is %p\n",ptr2);
    // printf("Address of some garbage is %p\n",*ptr2);
    return 0;
}


