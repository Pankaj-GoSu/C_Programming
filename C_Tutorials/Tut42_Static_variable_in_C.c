/*
Author :Pankaj Goswami
Purpose : Static Variable In C.
Date : 10/01/2022
*/

/*
1)- Scope is a region of the program where a defined variable can exist and
    beyond which it cannot be accessd.
2)- Global variable : These are the variable defined outside the main method.
    Global variable are accessible throughout the entire program from any function.


# ==== Static Variables in C =========
    1)- Static variables are variables which have a property of preserving their values even 
        they go out of scope.
    2)- They preserve their value from the previous scope and are not initialized again.
    3)-Static variable remains in memory throughout the span of program.
    4)- Static variable are initialized to 0 if not initialized explicitly.
    5)- In c,static variable can only be intialized using constant literals.
        (bcoz memory is allocated before main method run thats why and we know it need a
        explicit memory location)
    


*/

#include <stdio.h>
#include <string.h>

int b =34;

int func1(int b)
{
    static int myvar = 2;
    printf("The value of myvar is %d\n",myvar);
    myvar ++;
    // printf("The address of b inside func1 is %d\n",&b);
    // printf("The value of b inside func1 is %d\n",b);
    return b*myvar;
}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n",&b);
    int val = func1(b);
    val = func1(b);
    int *ptr = &b;
    val - func1(b);
    // printf("The value of func1 is %d\n", val);
    // printf("The address of b inside main is %d\n",ptr);

    return 0; 
}
