/*
Author : Pankaj Goswami
Purpose :For loops In C.
Date :  06/01/2022
*/

/*
Qu : Why use for Loop ?
Ans : The For Loop is used to iterate the statements or a part of the program several times.

===>>> The syntax of For loop in C language !
    for (Expression 1;Expression 2 ; Expression3){
        //Code to be run.
    }

#Example :
int i
 for (i=0;i<5;i++)
{
printf("%d",i);
}

# Properties Of Expression :
Expression 1 - Initialization of the loop variable.
              We can initialize more than one variable in Expresion 1.
              Expression 1 is optional.

Expression 2 - It is a condition expresion.It check for a specific condition to be satisfied.if it is not ,
                the loop is terminated.
              It can have more than one condition,However,the loop will iterate until the last condition
              become False. Other conditions will be treated as statements.
              It is optional.(Use Break Statement).
              Can Perfrom the task of expression 1 and expression 3.
              We can pass zero or non-zero value in expression2. However in C, any non-zero value is true
              and zero is false by default.

Expression 3- It is used to update the loop variable.
              We can update more than one variable at the same time.
              Expression 3 is optional.


*/

/*
#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    for (; j = 3, i < 5; i++) // Here we consider only last condition ! other conditions are treated as statements.
    {
        printf("%d %d\n", i, j);
        j++;
    }
    return 0;
}
*/

// Multiplication Table

#include <stdio.h>

int main()
{
    int i ,j;
    printf("Enter a Number whose Multiplication table you want: \n");
    scanf("%d",&i);
    for(j=1;j<11;j++)
    {
        printf("%d X %d = %d\n",i,j,i*j);

    }
    return 0;
}

