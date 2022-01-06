/*
Author : Pankaj Goswami
Purpose : Switch Case Statements
Date : 6/1/2022
*/

/*
# Code Using Switch Statement :
int a = 2
switch(a) {
case 2:
    printf("Value is 2");
    break;
case 3: 
    printf("Value is 3");
default:
    printf("Nothing Match");
}

# ======= Rule For Switch Statement ======
1- Switch expression ==> int or char
2- Case value must be an integer or a character.
3 - Case must come insdie switch.
4- break is not must.

int a =2
*/

/*

#include <stdio.h>

int main()
{
    int age,marks;
    printf("Enter your age \n");
    scanf("%d",&age);
    printf("Enter Your Marks \n");
    scanf("%d",&marks);
    switch (age){
        case 3:
        printf("The age is Three\n");
        switch (marks){
            case 15:
            printf("Your Marks are %d\n",marks);
            break;
            default:
            printf("Your Marks are not 15 \n");
        
        }
        break;        
        case 13:
        printf("The age is 13\n");
        break;
        case 23:
        printf("The age is 23\n");
        break;
        default:
        printf("Age is not 3, 13\n");
        break;


    }
    return 0;

}

*/

#include <stdio.h>

int main(){
    char chr;
    printf("Enter Any Character : \n");
    scanf("%c",&chr);
    switch(chr){
        case 'a':
        printf("you entered a");
        break;
        case 'b':
        printf("You entered b");
        break;
        default:
        printf("you entered other than a and b \n");

    }
    return 0;
}