/*
Author : Pankaj Goswami
Purpose : Exercise 7
Date : 11/01/2022
*/

/*

#include <stdio.h>
#include <string.h>

struct Driver
{
    char Name[30];
    char Driving_License_No[15];
    char Route[20];
    int Kms;
};

int main()
{
    int n;
    printf("How Many drives you are please Enter your no. : \n");
    scanf("%d",&n);
    struct Driver arr[10]; // Here we define array of User define data type that is struct Driver.
    for(int i = 1 ; i < n+1; i++ )
    {
        printf("Please %d Enter Your Name :\n",i);
        scanf(" %s",&arr[i].Name);
        printf("Please %d Enter Your Driving License :\n",i);
        scanf(" %s",&arr[i].Driving_License_No);
        printf("Which route you travel %d : \n",i);
        scanf("%s",&arr[i].Route);
        printf("How many Kms You Travel %d \n",i);
        scanf("%d",&arr[i].Kms);

    }
    printf("\n We get the Following Details of drivers \n");
    for(int i = 1; i < n+1; i++){
        printf("\n Name of %d driver is : %s \n",i,arr[i].Name);
        printf("Driving License of %d driver is : %s \n",i,arr[i].Driving_License_No);
        printf("Route Travelled by %d driver is : %s \n",i,arr[i].Route);
        printf("Total kms drive by %d driver is : %d \n",i,arr[i].Kms);
    }
}

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Driver
{
    char Name[30];
    char Driving_License_No[15];
    char Route[20];
    int Kms;
};

// Using 
int main()
{
    int n;
    printf("How Many drivers you are please Enter your no. : \n");
    scanf("%d", &n);
    struct Driver *arr; // Here we define array of User define data type that is struct Driver using Dynamic memory allocation.
    arr = (struct Driver *)malloc(n * sizeof(struct Driver));
    for (int i = 1; i < n + 1; i++)
    {
        printf("Please %d Enter Your Name :\n", i);
        scanf(" %s", &arr[i].Name);
        printf("Please %d Enter Your Driving License :\n", i);
        scanf(" %s", &arr[i].Driving_License_No);
        printf("Which route you travel %d : \n", i);
        scanf("%s", &arr[i].Route);
        printf("How many Kms You Travel %d \n", i);
        scanf("%d", &arr[i].Kms);
    }
    printf("\n We get the Following Details of drivers \n");
    for (int i = 1; i < n + 1; i++)
    {
        printf("\nName of %d driver is : %s \n", i, arr[i].Name);
        printf("Driving License of %d driver is : %s \n", i, arr[i].Driving_License_No);
        printf("Route Travelled by %d driver is : %s \n", i, arr[i].Route);
        printf("Total kms drive by %d driver is : %d \n", i, arr[i].Kms);
    }
}
