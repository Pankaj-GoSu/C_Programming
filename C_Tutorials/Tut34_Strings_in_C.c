/*
Author : Pankaj Goswami
Purpose : Strings In C.
Date : 09/01/2022
*/

/*
Qu : Is String a Data type in C?
Ans : No
     -> We have char,int,float and other data types but no 'string' data type in C.
     -> string is not a supported data type in C but it is a very useful concept used to model
        real world entities like name, city etc.
    -> We express strings using an array of character terminated by a null character('\0').
    ===>>> So to store a string in character array size of character array must be 
           size of string + 1 (this 1 for null character).

Qu : what are string in C
Ans : String: Array of character terminated by NULL character.
      We need an extra character('\0' or null character) to tell the compiler that the string end here.

==>> We can create a character array in the following ways:
    char name[] = "Pankaj"; // it automatically take null character
    char name[] = {'P','a','n','k','a','j','\0'}

==>> Taking String Input from the user.

    char str[20]
    gets(str); --> User give input a string which store in str with null character(auto).
    printf("%s",str);
    puts(str); //aliter
*/

/*
#include <stdio.h>

void printstr(char str[] )
{
    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
}

int main()
{
    char str[] = {'P','a','n','k','a','j','\0'};
    char str1[] = "PankajG"; // it automatically become null terminnted character array.
    printstr(str1);
    return 0;
}
*/

// Taking input from user : String

#include <stdio.h>

int main()
{
    char str[45] ;
    gets(str); // with scanf we can not take white spaces so we use gets.
    printf("Using printf : %s \n",str);
    printf("Using Puts \n");
    puts(str);
return 0;
}