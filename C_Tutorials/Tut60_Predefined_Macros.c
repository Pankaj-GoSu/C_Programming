/*
Author : Pankaj Goswami
Purpose : Other Directives And Predefined Macros.
Date : 15/01/2022
*/

/*
#include
#define
#undef => undefines a macro or preprocessor variable.
#ifdef -> return True if preprocessor variable is defined.
#ifndef ->  return True if preprocessor variable is not defined.
#if
#else
#elif
#pragma - to issue some special command to the compiler.

*/

/*
PreDefined Macros In C.
1- __DATE__
The current date as character literal in "MM DD YYYY" format.
2- __TIME__
This contains the current time as a character literal in " HH:MM:SS" format.
3-__FILE__
The current filename as a string Literal.
4- __LINE__
The current line number as a decimal constant.
5- __STDC__
Defined as I(one) when the compiler compiles with the ANSI standard.
*/

#include <stdio.h>

int main()
{
    printf("File Name is %s \n",__FILE__);
    printf("Todays Date is %s \n",__DATE__);
    printf("Now Time is %s \n",__TIME__);
    printf("%d\n",__LINE__);
    printf("ANSI : %d",__STDC__);
 return 0;   
}