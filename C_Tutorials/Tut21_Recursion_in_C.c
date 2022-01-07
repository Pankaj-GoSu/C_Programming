/*

Author : Pankaj Goswami
Purpose : Recursion in C
Date : 07/01/2022

*/

/*

Qu : What is a Recursive Function ?
Ans : Recursive functions or Recursion is a process when a function calls a copy of itself to work
      on a smaller problem.
      => Any function which calls itself is called recursive function.
      => A termination condition is imposed on such functions to stop them executing copies of 
        themselves forever.
    => Any problem that can be solved recursively , can also be solved iteratively.

*/


// ======== Factorial finding ======

/*
 
#include <stdio.h>

int factorial(int num)
{
 if (num == 0){
     return 1;
 }
 return (num*factorial(num-1));
}

int main()
{
    int a,y;
    printf("Enter Number : \n");
    scanf("%d",&a);
    y = factorial(a);
    printf("%d",y);
    return 0;
}

*/


//  ====== Fibonacci Series ==========

// 0 1 1 2 3 5 8 13 ....

#include <stdio.h>

void fibonacci(int a, int b ,int num)
{
    int c;
    if(num == 0)
    {
        return;
    }
    else 
    {
        printf("%d",a);
        c = a + b;
        a = b;
        b = c;
        fibonacci(a,b,num-1);
    }
}
int main()
{
    int num;
    printf("Enter Number upto you want fibonacci series");
    scanf("%d",&num);
    fibonacci(0,1,num);
    return 0;
}