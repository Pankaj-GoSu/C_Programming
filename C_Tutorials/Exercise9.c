/*
Author : Pankaj Goswami
Purpose : Exercise 9
Date : 12/01/2022
*/

/*

// Here we are Making Rock, Paper and Scissors Game.
 == >> Using randome number genrator.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h .
    int a = rand()%5;
    printf(" Random Number is : %d",a);
}

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  main()
{
    srand(time(NULL));
    int n1,n2,turn;
    int i =0 , j= 0,k=0; // i  for player j for computer
    char name[20];
    printf("\t\t ~~~~ Welcome to Rock Paper Scissor Game ~~~~\n");
    printf("Please Enter Your Name to play Game: \n\n");
    scanf("%s",name);
    printf("Rule of game :\n Press 1 - Rock \n Press 2 - Paper \n Press 3 - Scissor \n\n");
    printf("How many times you want to play \n");
    scanf("%d",&turn);
    while(k < turn)
    {
    printf("%s Turn : \n",name);
    scanf("%d",&n1);
    n2 = rand()%2;
    n2 = n2 + 1;
    
    printf("Computer Turn : %d \n",n2);
    if (n1 == n2)
    {
        printf("Draw \n");
    }
    else if((n1==1 && n2 ==2) || (n1 == 2 && n2 == 3) || (n1 == 3 && n2 == 1))
    {
        j++;
    }
    else if((n1==2 && n2 ==1) || (n1 == 3 && n2 == 2) || (n1 == 1 && n2 == 3))
    {
        i++;
    }
    k++;
    }
    printf("%s Your Score is : %d \nComputer Score is : %d \n",name,i,j);

    if(i>j)
    {
        printf("%s You Win !",name);

    }
    else if (i<j)
    {
        printf("Computer Win !\n");
    }
    else
    {
        printf(" Final result is : Draw\n");
    }


    return 0;
}
