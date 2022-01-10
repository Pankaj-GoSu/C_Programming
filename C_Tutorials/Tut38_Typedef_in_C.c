/*
Author : Pankaj Goswmai
Purpose : Typedef in C
Date : 10/01/2022
*/

/*
==>> typedef is a keyword in C language it used to give alternative name to exiting data types.

==>> Syntax :
    typedef previous_name alias_name;

*/
// aka - Also known as 

// #include <stdio.h>
// #include <string.h>

// struct Student
// {
//     int id;
//     char name [30];
// };

// int main()
// {
//     // typedef <previous_name> <alias_name>;
//     typedef unsigned long ul;
//     typedef struct Student std;
//     ul l1, l2 ,l3;
//     std Pankaj;
//     Pankaj.id = 151;
//     printf("%d",Pankaj.id);
//     return 0;
// }



#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}std;
// typedef struct Student std;
int main()
{
    // struct Student s1,s2,s3;
    // typedef struct Student std; We can also do this
    std s1;
    typedef int* intPointer;
    // int *a,b;
    intPointer a,b;
    int c =89;
    a = &c;
    b = &c;
    s1.id =23;
    printf("%d",s1.id);
    return 0;
}