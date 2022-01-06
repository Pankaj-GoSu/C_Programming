// ========= C Format Specifiers And Escape Sequences ============

/*
=> Format specifier is a way to tell the compiler what type of data is in a variable 
during taking input displaying output to the user .
=> %c -> Print character
=> %d -> Print Integer
=> %f -> Print float
=> %l -> Print long
=> %lf -> Print double
=> %Lf -> Print long double 

# ==== Constants In C :
    A constant is a value or variable that can not be changed in the program.
    We Define constant using=>
    -> const keyword
    -> #define preprocessor



# ===== Escape Sequences In C :
    \a -> Alarm or Beep
    \b -> Backspace
    \f -> Form Feed 
    \n -> New Line
    \r -> Carriage Return
    \t -> Tab
    \v -> Vartical Tab
    \\ -> Backslash
    \' -> Single Quote
    \" -> Double Quote
    \? -> Question Mark
    \nnn -> octal number
    \xhh -> hexadecimal number
    \0 -> Null

*/

#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 8;
    const float b = 7.333;
    // PI = 7.33; //cannot do this bcoz b is constant
    printf("%f \t Hello  ",PI);
    // b = 7.22; //cannot do this bcoz b is constant
    // printf("Hello World\n");
    // printf("The value of a is %d and the value of b is %0.1f\n",a,b);
    // printf(" %.2f\n",b);
    

    return 0;
}


