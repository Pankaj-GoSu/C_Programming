/*
Author : Pankaj Goswami
Purpose : Exercise 8
Date : 12/01/2022
*/

/*
Exercise On Dynamic Memory Allocation.
*/

// getchar() function ==> Important it is handle , When 2 scanf are there after one another 
// at that time scanf take Enter as a character as a result in one scanf f we can not enter character.

// ====== Method 1 for only for 3 employee =========
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *charptr;
    int n;
    printf("Employee 1 : \n Enter no of character in your eID \n");
    scanf("%d",&n);
    charptr = (char *) malloc((n+1)*sizeof(char));
    printf("Enter Your eID \n");
    for(int i = 0 ; i < n ; i++)
    {
        scanf(" %c",&charptr[i]);
    }
    printf("Employee 1 eID is : %s\n", charptr);

    printf("\nEmployee 2 : \n Enter no of character in your eID \n");
    scanf("%d",&n);
    charptr = (char *) realloc(charptr,(n+1)*sizeof(char));
    printf("Enter Your eID \n");
    for(int i = 0 ; i < n ; i++)
    {
        scanf(" %c",&charptr[i]);
    }
    printf("\n Employee 2 eID is : %s\n", charptr);
    printf("Employee 3 : \n Enter no of character in your eID \n");
    scanf("%d",&n);
    charptr = (char *) realloc(charptr,(n+1)*sizeof(char));
    printf("Enter Your eID \n");
    for(int i = 0 ; i < n ; i++)
    {
        scanf(" %c",&charptr[i]);
    }

    printf("Employee 3 eID is : %s\n", charptr);
    free(charptr);
    return 0;
}

*/

// ======== Method 2 General for n no. of employee ======

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int em,n;
    char *charptr = (char*)malloc(1*sizeof(char)); ;
    
    printf("Enter How Many Employee you are \n");
    scanf("%d",&em);
    for(int i = 1; i < em +1 ; i++)
    {
        printf("Employee %d : \n Enter no of character in your eID \n",i);
        scanf("%d",&n);
        charptr = (char *)realloc(charptr,(n+1)*sizeof(char));
        printf("Enter Your eID \n");
        // for(int j = 0; j< n ; j++)
        // {
        //     scanf(" %c",&charptr[j]);
        // }
        scanf(" %s",charptr);
        printf("Employee %d eID is : %s\n", i,charptr);

    }
    free(charptr);
    return 0;
}