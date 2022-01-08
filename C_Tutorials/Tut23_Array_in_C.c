/*
Author : Pankaj Goswami
Purpose : Arrays In C.
Date : 08/01/2022.
*/

/*
Qu - What is an Array ?
Ans - An array is a collection of data items of the same type.
      items are stored at contiguous memory loaction.
      It can also store the collection of drived data type such as pointers , structures etc.
      Each element of an array is of same size.
    =>Some Texts refer:
         1D arrays as vectors.
         2D arrays as matrices.
    ===>>> Syntax For Declaring and initializing an array.
           Data_type name[size];
           Data_type name[size] = {x,y,z,....}; // size not required in this case!
           Data_type name[rows][columns]; // for 2-d arrays.

// ===>> Disadvantages of using Arrays:
    Poor time complexity of insertion and deletion operation.
    Wastage of memory since arrays are fixed in size.
    

*/

#include <stdio.h>

int main()
{
    // int marks[4]; // We create one array of size 4.
    int marks[2][4] = {{45, 34, 23, 1},
                       {56, 3, 6, 8}};
    // int marks[4] = {45,56,76,8};
    // marks[0]=34;
    // marks[1]=3;
    // marks[2]=4;
    // marks[3]=314;
    // printf("marks of student 1 is : %d\n",marks[2]);
    // marks[0]=454;
    // printf("marks of student 1 is : %d\n",marks[0]);
    // for (int i = 0; i < 4; i++ ){
    //     printf("Enter the value of %d elements of the array \n",i);
    //     scanf("%d",&marks[i]);
    // }
    // for (int i = 0; i < sizeof(marks[4]) ; i++){
    //     printf("The value of %d element is %d\n",i,marks[i]);

    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Value at (%d , %d) is => %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}