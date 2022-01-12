/*
Author : Pankaj Goswami
Purpose : Dangling Pointer In C.
Date : 12/01/2022
*/

/*
Dangling => Means Hanging.

Qu : What is a Dangling Pointer ?
Ans : A pointer pointing to a freed memory loaction or the location whose content has been 
      deleted.
      Dangling Pointer arise during object destruction when an object that has an incoming reference 
      is deleted or deallocated.

# Cause of Dangling Pointer :
1 - Deallocation of memory
2- Returning local variable in function calls
3- Variable going out of scope.

==>> Is Dangling Pointer a Good thing to have ?
    Dangling pointers can introduce nasty bugs in our C programs.
    We can avoid issues caused by dangling pointers by initializing pointer to NULL.

*/

#include <stdio.h>
#include <stdlib.h>

int* functionDangling()
{
    int a = 34;
    int b = 345;
    int sum = a + b;
    return &sum;
}

int main()
{   // Case 1: De allocation of a memory block.
    int *ptr =(int *) malloc(7*sizeof(int));
    ptr[0] = 12;
    ptr[1] = 1;
    ptr[2] = 2;
    ptr[3] = 142;
    free(ptr); // ptr is now a dangling pointer.

    // Case 2: Function returning local variable address.
    int *dangPtr = functionDangling(); // dangPtr is now a dangling pointer.

    // Case 3: If a variable goes out of scope.
    int *danglingPtr3;
    {
        int a = 34;
        danglingPtr3 = &a;
    }
    // Here variable goes out of scope Which means danglingPtr 3 is pointing to a 
    // location which is freed and hence danglingPtr3 is now a dangling pointer.

    return 0;
}