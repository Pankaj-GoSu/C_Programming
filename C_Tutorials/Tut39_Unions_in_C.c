/*
Author : Pankaj Goswami
Purpose : Uninons In C.
Date : 10/01/2022 
*/

/*
Unions in C :
    it is similat to structures.

Qu: What is a Union ?
Ans : Union is a user defined data type(very similar to structure)
      The diffrence between structures and union lies in the fact that in Structure , each member has
      its own storage location,whereas members of a union uses a single shared memory location.
      The single shared memory location is equal to the size of its largest data member.   

# == >> Declaring And Accessing Union Members:

==>>> Like structure we access any member by using the member access operator(.) in unions.
==>>> We use keword union to define union 
==>> Syntax is very similar to structure.

######## Union can not handle all Members at once ########
#==>>> We can use unions to introduce better memory management in our C programs.
*/

#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

};

int main()
{
    union Student s1;
    
    s1.fav_char = 'p';
    s1.marks = 45;
    s1.id =1;
    strcpy(s1.name,"Pankaj"); // in union it only focus on this last assigned value and it store it properly other value may get change.

    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The Fav char is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);
    return 0;
}