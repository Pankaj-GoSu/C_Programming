/*
Author : Pankaj Goswami
Purpose : Functions in C.
Date: 07/01/2022
*/

/*
Qu : What is a function
Ans : Functions are used to divide a large C program into smaller pieces 
      A function can be called multiple times to provide reusabilty and modularity to the C program.
      Also called procedure or subroutine.

==> Basic syntax of a C functions :
    return_type function_name(data_type parameter1, data_type parameter2){
        // code to be executed
    }     

==> Types Of Functions :
    Library Function- Functions included in C header files.
    User defined functions - Created by user.

==> Function Code Examples
    Without arguments and without return value 
    Without arguments and with return value
    With arguments and without return value
    with arguments and with return value

*/

/*
// ========== with arguments and with return value ================
#include <stdio.h>

int sum(int a, int b); // it is function protoype or we can say FUNCTION DECLARATION. but not define here.

int main()
{
    int a,b,c;
    a = 9;
    b = 87;
    c = sum(a,b);
    printf("sum is : %d \n",c);

    return 0;
}
int sum(int a ,int b)
{
    return a+b;
}
*/

// ========= With arguments and without return value =========

/*

#include <stdio.h>

void printstar(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}
int main()
{
    printstar(7);
    return 0;
}
*/

// ========== Without arguments and with return value =========
/*

#include <stdio.h>

int takenumber()
{
    int i;
    printf("Enter Number \n");
    scanf("%d", &i);
    return i ;
}

int main()
{
    int c;
    c = takenumber();
    printf("The number entered %d \n",c);


    return 0;
}
*/

// ============== Without arguments and without return value =========

#include <stdio.h>

void quiz()
{
    printf("This Function : Without arguments and without return value\n ");
}

int main()
{
    quiz();
    printf("Code run after function quiz() \n");
    return 0;
}