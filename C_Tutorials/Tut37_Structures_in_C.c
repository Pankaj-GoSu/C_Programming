/*
Author : Pankaj Goswami
Purpose : Structures In C.
Date : 10/01/2022
*/

/*
Important Topic.

Qu : What is a Structure In C?
Ans : Structures are user defined data type in C.
      Using structures allows us to combine data of different types together.
      It is used to create a complex data type which contains diverse information.
      They are very simlar to array but structure can store data of any type, which is practically more useful.

#===>> We just define Structure data type then we can use it like int data type any where ,
       but first we have to define this data type bcoz it is user defined data type.

# Defining a Structure.

We can declare structure in two ways :
Basically difference is in first one we just define data type .
In second one with data type we also define variable in it.

=> We make structure data type outside the main function but we can use it any where.

### ============================================
==>> Accessing structure members:
     Array elements are accessed using the subscript variable.
     In a similar fashion , structure members are accessed using dot[.] operator.
     (.) is called as "structure member operator"

# We use the structure to create user defined data type in C.

*/

#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
struct Student Pankaj,kaushal,ravi; // global variable. --> We can update it any where it also refelect.

void print(){
    printf("%s",Pankaj.name);
}

int main()
{
    
    Pankaj.id = 1;
    kaushal.id = 2;
    ravi.id = 3;
    Pankaj.marks = 735;
    kaushal.marks = 786;
    ravi.marks = 777;
    Pankaj.fav_char = 'p';
    kaushal.fav_char = 'k';
    ravi.fav_char ='r';
    strcpy(Pankaj.name,"GoSu");
    printf("Pankaj Got %d marks\n",Pankaj.marks);
    printf("Pankaj's nik name is %s\n",Pankaj.name);
    print();
return 0;
}

