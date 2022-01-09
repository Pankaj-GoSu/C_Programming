/*
Author : Pankaj Goswami
Purpose : String Functions In C and string.h Library.
Date : 09/01/2022
*/

/*
String is Null terminated Character Array.

C LIBRARY: <string.h>

Function                    Use
strcat()            This function is used to concatenate or combine two given strings

strlen()            This function is used to show length of a string. // not count null character.

strrev()            This function is used to show reverse of a string.

strcpy()            This function is used to copy one string into another

strcmp()            This function is used to compare two given strings
                    // it return 0  when both strings are same.


*/
/*
#include <stdio.h>
#include <string.h>


int main()
{
    char str1[] = "Pankaj";
    char str2[] = "Pankaj";
    char str3[45];
    printf("The strcmp for str1 ,str2 returned %d",strcmp(str1,str2));
    // puts(strcat(str1,str2));
    // printf("The length of str1 is %d\n",strlen(str1));
    // printf("The length of str2 is %d\n",strlen(str2));
    // printf("The reverse of str1 is %s\n",strrev(str1));
    // printf("The reverse of str2 is %s\n",strrev(str2));
    
    // strcpy(str3,strcat(str1,str2));
    // printf("%s",str3);



    return 0;
}

*/

// allow user to enter two strings and then concatenate them by saying that
// str1 is a friend of str2

#include <stdio.h>
#include<string.h>

int main()
{
    char str1[20],str2[20];
    char str3[20] ;
    printf("Enter str 1 : \n");
    gets(str1);
    printf("Enter str 2 : \n");
    gets(str2);
    // str3[20] = strcat(str1," is a friend of ");
    printf("%s",strcat(strcat(str1," is a friend of "),str2));
    return 0;
}