/*
Author: Pankaj Goswami
Purpose: Functions : Call by value Vs Call by refernce. 
Date: 09/01/2022
*/

/*
When we write any variable inside main then that variable act as Global Variable.

Actual And Formal Parameters:
    1- When a function is called , the value(expression) that are passed in the call are called
     arguments or actual parameters. // Wo jo hum as a arguments pass kringe.
    2- Formal parameters are local variable which are assigned values from the arguments when
       the function is called . // Jab hum koi function define krte h tb jo usme variable hote h jise
       int a or int b kr k define krte h . 

===>>> In C programming language , we can call a function in two different ways, based on how we 
       specify the arguments, and these two ways are.
       1- Call by Value. // Here actual paremeter copy into Formal parameter.
       2- Call by Reference. // Here we give address of variable to formal paramete(it is act as pointer)
          And when we have address than we can change content of  variable which is not possible in 
          call by value .

CALL BY VALUE : When we call a function by value. it means that we are passing the value of the arguments
                which are copied into the formal parameters of the function.
                Which means that the original value remain unchanged and only the paremeters inside the 
                function changes.

CALL BY REFERENCE : The call by reference method of passing arguments to a C function copies the address
                    of the arguments into the formal parameters.
                    Addresses of the actual arguments are copied and then assigned to the corresponding
                    formal arguments.
CALL BY REFERENCE Example : Swaping Number.

*/

// Example of Call By Reference function.

/*

#include <stdio.h>

void changeValue(int *add_a)
{
    *add_a = 340;
}
int main()
{
    int a = 34,b = 56;
    printf("value of a is :%d \n",a);
    changeValue(&a);
    printf("Now value of a is :%d\n",a);

    return 0;
}

*/

// Given two numbers a and b , add them then substract them and assign them to a and b using call
// by reference.

// ===>> # Example of Call By Reference. 

#include <stdio.h>

int sum_sub(int *ptra, int *ptrb){
    int temp1,temp2;
    temp1 = *ptra;
    temp2 = *ptrb;
    *ptra = temp1 + temp2;
    *ptrb = temp1 - temp2;
}
int main()
{
    int a = 4 ,b = 3;
    printf("We have two number %d and %d \n",a,b);
    sum_sub(&a,&b);
    printf("Sum a + b : %d , sub a - b : %d",a,b);
    return 0;
}
