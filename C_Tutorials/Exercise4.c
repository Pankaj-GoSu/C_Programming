/*
Author : Pankaj Goswami
Purpose : Exercise 4
Date : 09/01/2022
*/

/*
Take input from user and ask user choose 0 for triangular star pattern and 1 for reversed triangular 
star pattern
Then print the pattern accordingly.
*/

#include <stdio.h>

int triangular_pattern();
int reversed_triangular_pattern();

int main(){
    int inp;
    printf("choose 0 for triangular star pattern and 1 for reversed triangular star pattern Then print the pattern accordingly.\n");
    scanf("%d",&inp);
    if (inp == 0){
        triangular_pattern();
    }
    else if(inp == 1) {
        // printf(" ");
        reversed_triangular_pattern();
    }
    else{
        printf("Plesae check your input");
    }
    return 0;
}

int triangular_pattern(){
    int a;
    printf("Enter a digit upto you want * pattern ");
    scanf("%d",&a);
    for(int i =1; i < a + 1;i++){
        for(int j =0; j<i ; j++){
            printf(" %c ",'*');
        }
        printf("\n");
    }
    return 0;
}

int reversed_triangular_pattern(){
    int b;
    printf("Enter a digit upto you want * pattern ");
    scanf("%d",&b);
    for(int i = b; i > 0; i--){
        for(int j=0; j<i;j++){
            printf("%c ",'*');
        }
        printf("\n");

    }
    return 0;
}