/*
Author : Pankaj Goswami
Purpose : Passing Array To a Function in C.
Date : 09/01/2022 
*/

/*
#1 We pass arrays to a function when we need to pass a list of values to a given function.
#2 : We can pass the arrays to a function :
    1: By declaring array as a parameter in the function
    2: By declaring a pointer in the function to hold the base address of the array.

In Any Case If you change the value of the array , it gets reflected in the main function.

*/

/*
# ==> We know that name of array contains the address of first element in it .

*/

#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4;i++){
        printf("%d \n",array[i]);
    }
    array[0] =735;
    return 0;
}


int func2(int *ptr)
{
    for (int i = 0;i < 4; i++)
    {
        printf("The value at %d is %d \n",i ,*(ptr+i));
    }
    *(ptr +2) = 6534;
return 0;
}
// We also pass Multidimenstional Array.
int main()
{
    int arr[] = {2,1,4,45};
    printf("The value at index 0 is : %d \n",arr[0]);
    func1(arr); // it converts to pointer and when we change value in func1 function then it also refelect in main function. 
    printf("The Value at index 0 is %d\n",arr[0]);
// ==================================
    func2(arr);
    func2(arr);
    return 0;

}

