/*
Author : Pankaj Goswami
Purpose : Break and Continue Statements In C.
Date : 06/01/2022
*/

/*

==> Break Statement 
    Used to bring the program control out of the loop.
    Break statement is used inside loops or switch statement.
    Break statement can be used with :
    a) Loops.
    b) switch case expression.

==> Continue Statement
    Used to bring the program control to the next iteration of the loop.
    The continue statement skips some code inside the loop and continues with the next iteration.
    It is mainly used for a condition so that we can skip some lines of code for a particular condition.


*/

/*
#include <stdio.h>

int main()
{
    int i,age;
    for(i =0;i<10;i++){
        printf("%d\n Enter Your age",i);
        scanf("%d",&age);
        if (age>10)
        {
            break;
        }

    }
    return 0;

}

*/

#include <stdio.h>

int main()
{
    int i,age;
    for(i =0;i<10;i++){
    printf("%d \n Enter your age\n",i);
    scanf("%d",&age);
    if(age>10){
        continue;
    }
    printf("We have not come accross any continue statements");
    }

    return 0;

}