/*
Author : Pankaj Goswami
Purpose : Do While Loop
Date : 06/01/2022
*/

/*
// do while loop -> executes at least once !

do{
    //code to be executed
} while(condition);

// We use Do while loop when we have to go inside the loop at least once !
// Means without checking any condition first program go inside the loop at least ones after that
    when condition is True then it go again inside the loop !


#===== Example :
int i = 0;

do{
    i = i + 1;
    printf("%d",i);
}while(i<10);

*/

/*
// Multiplication Table :

#include <stdio.h>

int main()
{
    int a ;
    int b = 1;
    printf("Enter a number whose multiplication table you want : \n");
    scanf("%d",&a);
    do {
        printf("%d X %d = %d \n",a,b,a*b);
        b = b+1;
    }while (b < 11);
    return 0;

}
*/

#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("Enter a number \n");
        scanf("%d", &num);
    do
    {
        printf("%d \n", index);
        index = index + 1;
    } while (index < num);

    return 0;
}

