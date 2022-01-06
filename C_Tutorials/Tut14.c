/*
Author : Pankaj Goswami
Purpose : While loop in C
Date : 06/01/2022

*/

/*

while(condition)
{
// Code to be executed.
}

*/

/*
// Multiplication Table :

#include <stdio.h>

int main()
{
    int i = 0,j ;
    printf("Enter Value Whose Multiplication You want : ");
    scanf("%d",&j);
    while(i<10)
    {
        i = i+1;
        printf("%d X %d = %d \n",j,i,j*i);

    }
    return 0;
}
*/

#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 54)
    {
        printf("%d\n", i);
        i += 1;
    }
    return 0;
}
