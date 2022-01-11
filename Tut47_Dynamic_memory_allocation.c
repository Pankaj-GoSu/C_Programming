/*
Author : Pankaj Goswami
Purpose : Dynamic Memory Allocation 
Date : 11/01/2022
*/

// Very Important !
// We can use Dynamic Memory allocation to Make Dynamic Array 

/*
Allocation in Heap is called Dynamic memory allocation.

#======== Functions For Dynamic Memory Allocation In C. =============
=> In Dynamic memory allocation , the memory is allocated at runtime from the heap segment. 

==>> We have four functions that help us achieve this task. 

1- malloc
2- calloc
3- realloc
4- free

*/
// Heap means memory storage(memory bhandar).
/*
#===== MALLOC() ========
1- malloc() stands for memory allocation.
2- It reserves a block of memory with the given amount of bytes.
3- The return value is a void pointer to the allocated space.
4- All  the value at allocated memory are initialized to garbage values.

Syntax :

int *ptr;
ptr = (int *)malloc(3*sizeof(int));

#====== CALLOC() =======
1- calloc() stands for contiguous allocation.
2- It reserves n block of memory with the given amount of bytes.
3- The return value is a void pointer to the allocated space.
4- All the values at allocated memory are initialized to garbage values

Syntax:

int *ptr;

ptr = (int *) calloc(n,sizeof(int));

#======= REALLOC() ======
1- realloc() stands for reallocation.
2- if the dynamically allocated memory is insufficient we can change the
    size of previously allocated  memory using realloc() function.

Syntax :

ptr = (int *) realloc(ptr, new_size in bytes);

#======== FREE() ========
1-free() is used to free the allocated memory.

Synrax :
    free(ptr);

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Dynamic memory allocation functions are inside <stdlib.h> header File.


// ========  Use of malloc() =============

/*

int main()
{
    
    int *ptr,n;
    printf("Enter the size of the array you want to create \n");
    scanf("%d",&n); // From here we can see that memory allocate at run time.
    ptr = (int*) malloc(n*sizeof(int)); // here we make array of size 3. and give address of first to pointer ptr.
    // ptr ==> is a Dynamically allocated array.
    for(int i = 0; i < n;i++){
        printf("Entr The value no %d of thus array \n",i);
        scanf("%d",&ptr[i]); // ptr[i] = *(ptr + i) ==> both are same thing. 
        
    }
    for(int i =0; i < n; i++){
        printf("Value in array at %d : %d \n",i,ptr[i]);
    }

    return 0;
}

*/

// ========= USE of calloc() ======

/*
int main()
{
    
    int *ptr,n;
    printf("Enter the size of the array you want to create \n");
    scanf("%d",&n); // From here we can see that memory allocate at run time.
    ptr = (int*) calloc(n,sizeof(int)); // here we make array of size 3. and give address of first to pointer ptr.
    // ptr ==> is a Dynamically allocated array.
    for(int i = 0; i < n;i++){
        printf("Entr The value no %d of this array \n",i);
        scanf("%d",&ptr[i]); // ptr[i] = *(ptr + i) ==> both are same thing. 
        
    }
    for(int i =0; i < n; i++){
        printf("Value in array at %d : %d \n",i,ptr[i]);
    }

    return 0;
}

*/

// ======= USE OF realloc() =========


int main()
{

    
    int *ptr,n;

    printf("Enter the size of the array you want to create \n");
    scanf("%d",&n); 
    ptr = (int*) malloc(n*sizeof(int)); 
    for(int i = 0; i < n;i++){
        printf("Enter The value no %d of this array \n",i);
        scanf("%d",&ptr[i]); 
    }
    for(int i =0; i < n; i++){
        printf("Value in array at %d : %d \n",i,ptr[i]);
    }
    
    // Use of realloc()

    printf("Enter the size of the new array you want to create \n");
    scanf("%d",&n); 
    ptr = (int*) realloc(ptr,n*sizeof(int)); 
    for(int i = 0; i < n;i++){
        printf("Entr The new value no %d of thus array \n",i);
        scanf("%d",&ptr[i]); 
        
    }
    for(int i =0; i < n; i++){
        printf("Value in new array at %d : %d \n",i,ptr[i]);
    }
    free(ptr);

    return 0;
}
