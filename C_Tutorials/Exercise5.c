/*
Author : Pankaj Goswami
Purpose : Exercise 5
Date : 09/01/2022
*/

/*
// Make one function to reverse array.
Take array in both method
*/

#include <stdio.h>
#include <string.h>

void arrayRev(int arr[]);
int len; // Global Variable

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7,100,3};

    len = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    arrayRev(arr1);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr1[i]);
    }
}

void arrayRev(int arr[])
{
    int temparr;
    for (int i = 0; i < len / 2; i++)
    {
        temparr = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temparr;
    }
}