/*
Author : Pankaj Goswami
Purpose : Exercise 
Date : 08/01/2022
*/

/*
Write program of Fibonacci series.
*/


#include <stdio.h>

void fibonacci(int a, int b , int c){
    if(c == 0) {
        return;
    }
    else{
    printf("%d ",a);
    fibonacci(b,a+b,c-1);
    
    }


}

int main()
{
    int a;
    printf("Up to which you want fibonacci series \n");
    scanf("%d",&a);
    fibonacci(0,1,a);
    return 0;
}


// ========== Using Iterative Method ================

/*
#include <stdio.h>

int main()
{
    int num ;
    int a = 0,b =1,c;
    printf("Up to which you want fibonacci series \n");
    scanf("%d",&num);
    for (int i = 0; i < num ; i++){
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
*/