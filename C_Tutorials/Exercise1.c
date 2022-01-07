/*
Print a multiplication table of a number entered by the user in pretty form
*/

/*
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number you want multiplication of : ");
    scanf("%d" , & a);
    printf("Table of 6: \n ");
    printf("%d X 1 = %d \n",a,a*1);
     printf("%d X 2 = %d \n",a,a*2);
     printf("%d X 3 =%d \n",a,a*3);
      printf("%d X 4 = %d \n",a,a*4);
     printf("%d X 5 = %d \n",a,a*5);
     printf("%d X 6 =%d \n",a,a*6);
      printf("%d X 7 = %d \n",a,a*7);
     printf("%d X 8 = %d \n",a,a*8);
     printf("%d X 9 =%d \n",a,a*9);
     printf("%d X 10 %d\n",a,a*10);

    return 0;
}

*/

// ======= Multiplication Table using function ========

#include <stdio.h>

void multiplication(int a)
{
    int i =0;
    while (i<10)
    { 
        i = i + 1 ;
        printf("%d X %d = %d\n",a,i,a*i);
    }
}

int main()
{
    int x ;
    printf("Enter a number whose multiplication table you want : \n");
    scanf("%d",&x);
    multiplication(x);
    return 0;
}