/*
Author : Pankaj Goswami
Purpose : File I/O Functions in C
Date : 16/01/2022
*/

/*
==>>> Working With Files In C.
=> When Working with files ,  we have to declare a pointer of type FILE.
=> FILE *fptr = NULL;

==>>> OPENING A FILE - CREATING OR EDITING A FILE .
=> stdio.h contains a function called fopen() for opening files in C.
=> Syntax for opening a file in standard I/O is :
    fptr = fopen("file_to_open","mode");
    .
    .
    fclose(fptr);
Any File which is opened in a C program needs to be closed.


==>> Reading a File :
    In order to read a file , we can use fscanf function.
    This function is file version of scanf function.
    fscanf expects a file pointer in addition to the other arguments which scanf expects.
Syntax :
fscanf(fptr,"%s",string);

==>> Writing to a file:
    In order to write to a file , we can use fprintf function.
    This function is file version of printf function.
    fprintf expects a file pointer in addition to the other arguments which printf expects.
*/


#include <stdio.h>

int main()
{
    FILE *fptr = NULL;
    char string[50] = " This content is produced by Me \n Hello";
    
    //****** Reading a file **********
    fptr = fopen("myfile.txt","r");
   
    /*
    fscanf(fptr,"%s",string); // Here fscanf does not take white spaces in string 
    // Like scanf not take white spaces thats why we have to use gets function to enter a string. 
    printf("The content of this file is : %s \n",string);
    */
   
   //******** Writing a file *********
    fptr = fopen("myfile.txt","a");
    fprintf(fptr,"%s",string);

    return 0;
}