/*

Author : Pankaj Goswami
Purpose : Arrays And Pointer Arithmetic In C
Date : 08/01/2022

*/

/*
Pointer Arithmetic :

    => There are four arithmetic operators that can be used in pointers:
        ++
        --
        +
        -

*/


/*
#include <stdio.h>

int main()
{
    int a = 3;

    int *ptra = &a;

    printf("%d \n",ptra);
    
    printf("%d \n",ptra);

    printf("%d",ptra+1); // it add (size of int in byte)*1(by which we increasing value here i.e. 1)
    // ptra ++ and ptra + 1 , both are same.
    return 0;
}
*/


/*

// Arrays And Pointers :
            int arr[10];
            => However, arr , by itself , without any index subscripting , can be assignend to an integer pointer.  
                int *ptr = arr ; // Valid statement .
                it meaans after this statement &arr[0] ==  ptr. 
                it means address of arr[0] store in ptr pointer.

===>>> arr[i] == *(arr+i)
    If arr is a pointer to arr[0] then arr + i is a pointer to arr[i].
    => Only name -> arr is act as a pointer .
    => We can not do arr++ : bcoz arr m jo address h wahi rahega use change ni kr skte
        But we can make a pointer of arr explicitly then we can do this operation.
===>>> Pointer Arithmetic can be used to write powerful C programs.

*/

#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int *arrptr = arr;
    printf("Value at position 3 of the array is %d \n",arr[4]);

    printf("The address of first element of Array is : %d \n",&arr[0]);
    printf("The address of second element of Array is : %d \n",&arr[1]);
    printf("The address of first element of Array is : %d \n",arr);
    printf("The address of second element of Array is : %d \n",arr + 1); // So it means arr work as pointer of array arr[10].
    
    printf("The address of third element of Array is : %d \n",&arr[2]);
    printf("The address of third element of Array is : %d \n",arr + 2);
    //arr++ ; // this line will throw an error bcoz it is a constant.

    printf("The Value at address of first element of Array is : %d \n",*(&arr[0]));
    printf("The Value at address of second element of Array is : %d \n",*(&arr[1]));
    printf("The Value at address of first element of Array is : %d \n",*(arr));
    printf("The Value at address of second element of Array is : %d \n",*(arr + 1));
    printf("The Value at address of third element of Array is : %d \n",*(&arr[2]));
    printf("The Value at address of third element of Array is : %d \n",*(arr + 2));
    return 0;
}