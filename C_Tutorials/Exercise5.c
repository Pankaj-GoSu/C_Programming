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

int main()
{
    int arr1[] = {1,2,3,4,5,6,7};
    int len;
    len = sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<len;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    arrayRev(arr1);
    for(int i=0;i<len;i++){
        printf("%d ",arr1[i]);
    }
    
}
int len(int len){
    return len;
}
void arrayRev(int arr[])
{
    int temparr[5];
    int len =7;
    // len = sizeof(arr)/sizeof(arr[0]);
    
    for(int i =0; i < len/2;i++)
    {
        temparr[i] = arr[i];
        arr[i] = arr[len-i-1]; 
        arr[len-i-1] = temparr[i];
    }
}