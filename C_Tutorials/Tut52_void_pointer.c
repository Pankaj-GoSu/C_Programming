/*
Author : Pankaj Goswami
Purpose : Void Pointer In C.
Date : 12/01/2022
*/

/*
Qu : What is void pointer ?
Ans : A void is a pointer that has no data type associated with it.
      A void pointer can be easily typecasted to any pointer type 
      In simple language it is a general purpose pointer variable.

==>> Uses of Void Pointer (General purpose pointer variablle)\
1- In dynamic memory allocation , malloc() and calloc() return (void*) type pointer.
   And they typecasted to any pointer type.

==== >>>
1- It is not possible to derefernce void pointer. // bcoz we do not have data type 
2- Pointer arithmetic is not allowedd in C standards with void pointers. // bcoz we do not have data type 


*/

#include <stdio.h>
#include <string.h>

int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr; // it is a general purpose pointer 
    ptr = &a;
    printf("The value of a is %d\n", (*(int*)ptr));
    ptr = &b;
    printf("The value of b is %f\n", (*(float *)ptr));
    return 0;
}