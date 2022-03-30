/*
Author : Pankaj Goswami
Purpose : #include And  # Define Preprocessor In C.
Date : 15/01/2022
*/

/*
The # include Directive:

1- The #include directive causes the preprocessor to fetch the contents of some other file top be 
included in the present file.
2- Most commonly the #included files have a ".h" extension , indicating that they are header files.

The # Define Directive.
1- The #define directive is used to "define" preprocessor "variables".
2- The #define preprocessor directive can be used to globally replace a word with a number.
3- It acts as if an editor did a global search - and - replace edit of the file.

Using #Define For Debugging.

1- #define directive can be used for debugging.
2- We can printing statments that we only want active when debugging.
3- We can "protect" them in a "ifdef" block as follows.
#define DEBUG.

ifdef DEBUG.

#=== >>> 
1- We can also create macros using #define.
2- Macros operate much like functions, but because they are expanded in place 
   and are generally faster.
macros(are like function which are resolved in first stage means in preprocessor state)

   # define SQUARE(x) x*x

area = PI *SQUARE (radius).

*/


#include <stdio.h>
#define PI 3.14 // here we replacing PI with 3.14 means we can use PI in place of 3.14.
#define SQUARE(r) r*r // using #define we can make macros which are faster then functions.
int main()
{
    float var = PI;
    printf("Value of PI is %f\n",var);
    int r = 5;
    printf("Area of circle with radius %d  is %f ",r,PI*SQUARE(r));
    return 0;
}
