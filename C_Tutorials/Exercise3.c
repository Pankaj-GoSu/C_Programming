/*
Author : Pankaj Goswami
Purpose : Exercise 
Date : 08/01/2022
*/

/*
Write program of Fibonacci series.
*/

// ======== Fibonacci Series using Recursive function =======
#include <stdio.h>

void fibonacci(int a, int b , int c){
    int x;
    if(c == 0) {
        
        return ;
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
    // printf("the value of fibonacci number at position no %d using recursive is : %d",a,fibonacci(0,1,a));
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
        
        // Using two variable
        // b = a+b
        // a = b-a
        
    }
    return 0;
}
*/

/*
Why is Recursion not always good .


*/