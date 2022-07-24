/*
Author : Pankaj Goswami
Purpose : If Else Control Statements
Date : 6/1/2022
*/

/*
=> It is used to perform operations based on some condtions
=> Types of if statement :
    if statement
    if else statement
    if-else if ladder
    nested if

*/  

/*
#include <stdio.h>

int main()
{
    int age;
   printf("Enter your age :\n");
   scanf("%d",&age);
   printf("You have Entered %d \n" , age);
   if (age>=80)
   {
       printf("You are Too old to drive Car");
       
   }
   else if (age >= 18){
       printf("You can Drive Car \n");
   }
   else{
       printf("you are under 18 \n");
   }
    return 0;
}

*/

// Quiz :

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char sub[10];
    
    printf("Which subject you passed ! only Math Type -> Math , Only Science Type -> Science Or type Both \n") ;
    gets(sub); 
    printf("Enter string %s \n",sub);
    char a[10] = "Math";
    // char b[10] = "Science";
    // char c[10] = "Both";
    if (!strcmp(sub,a)){
        printf("Giving 15 Rs for Math\n");
    }
    else if (sub == "Science" || sub == "Both"){
        printf("Giving 15 rs for Science\n");
    }
    // else if (sub == "Both" ){
    //     printf("Giving 45 rs for Passing Math and Science Both\n");  
    else {
        printf("Please Check Your input Run program again !\n");
    }

    return 0;
}