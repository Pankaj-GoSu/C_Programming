/*
Author : Pankaj Goswami
Purpose : NULL Pointer In C
Date : 12/01/2022
*/

/*
1- Null pointer ia a pointer which has a value reserved for indicating that the pointer or reference
does not refer to a valid object.
2- Dereferencing a null pointer is undefined behavior in C.
3- NULL pointer gives a functionality to C programmer to check whether a pointer is legitimate or not.

==>> Uses of Null Pointer.
1- To initialize a pointer variable in cases where pointer variable has not been assigned any 
valid address yet.
2- Null ==> ((void*)0) 

== >>> NULL Pointer is a value where as void pointer is a type.

*/

#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr = NULL ;
    if (ptr != NULL)
    {
    printf("The Address of a is %d \n", *ptr);
    }
    else{
        printf("Pointer is a null pointer and you can not be dereferenced");
    }
    return 0;
}


