/*
#include <stdio.h> // Preprocessor command

int main(){ // function
    printf("Hello World \n");
    return 0;
}

*/

/*
#include <stdio.h>

int main()
{

    // Data Type:
    // int , float , char
    

   // Here Memory Is RAM
 
    int a = 7; // 2 to 4 bytes
    unsigned short integer  =8;
    long integer1 = 8;
    short integer2 = 9;
    float b = 7.5; // 4 bytes - 6 decimal precision 
    double myfloat1 = 4.56; //8 bytes -  15 decimal precision
    long double myfloat = 4.37992; //10 bytes -  19 decimal precision
    char c = 'P'; // 1 byte
    char d[10] = "Pankaj";
    
    printf("The Size taken by  unsigned int is %d \n", sizeof(unsigned int));
    printf("Value of a is %d and b is %.1f and Character is %c and string is %s\n",a,b,c,d);
    const int i = 9;
    return 0;
}

*/

/*

#include <stdio.h>

int main()
{
    // int pankajInput;
    // printf("Please enter the value of pankajInput \n");
    // scanf("%d",&pankajInput);
    // printf("You entered %0.1f\n",(float)pankajInput);
    int a , b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("a/b is : %f",(float)a/b);
    return 0;
}
*/

// If statement

/*
#include <stdio.h>

int main()
{
    int age;
    
    while(1)
    {
    char c;
    printf("****Welcome to this function you want to ***** \n\n If you want to continue press c for exit press e \n");
    scanf("%c",&c);
    if(c == 'c')
    {
    printf("Enter Your Age :\n");
    scanf("%d",&age);
    
    if(age<18)
    {
        printf("You can not drive");
    }
    else if( age >18)
    {
        printf("You can drive");
    }
    else{
        printf("You are 18 so from next year you can drive");
    }
    }
    else if( c == 'e')
    {
        break;
    }
    else
    {
        printf("Please check your input and try again \n");
        
        continue;
        
        
    }
    }
    return 0;
}

*/

/*
// Switch statement :
#include <stdio.h>

int main()
{
    int a = 5;
    switch(a)
    {
        case 4 :
        printf("It is not 5");
        break;
        case 5 :
        printf("It is value 5");
        break;
        default :
        printf("not 6");

    }
}
*/

/*
// Conditional Statement :

#include <stdio.h>

int main()
{
    int age = 6;
    int i4 = age>3?100:200; // short hand if else.
    printf("%d",i4);
    return 0;
}
*/


// Loop in C.


/*
#include <stdio.h>

int main()
{
    int num = 0;
    // while(num<100)
    // {
    //     printf("%d\n",num+1);
    //     num += 1;
    // }
    // for(int i = 0 ; i < 100; i++)
    // {
    //     printf("%d\n",i+1);
    // }
    do 
    {
        printf("%d \n",num +1);
        num += 1;
    }
    while(num<100);
    
    return 0;
}

*/

/*
// Functions in C.

#include <stdio.h>

int sum(int a , int b)
{
    return a + b;
}
int main(void)
{
    printf("Sum is : %d ", sum(5,7));
    return 0;
}
*/

/*

// Array :

#include <stdio.h>

int main()
{
    // int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int arr[4];
    printf("Enter the values for array\n");
    for(int i = 0; i<4 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[3]);
    return 0;
}
*/

/*

// Pointers in C.

#include <stdio.h>

int main()
{
    int a = 98;
    printf("%d\n",a);
    int* ptr = NULL; // Pointer is a data type which store address of another variable
    ptr = &a;
    printf("%d and %d\n",ptr,&a);
    *ptr = 97; // dereferncing ptr.
    printf("%d\n",a);
    return 0;

}

*/


/*
// Strings

#include <stdio.h>
#include <string.h>

int main()
{
    char name[3] = {'m','y','\0'};
    char str1[50],str2[60];
    strcpy(str1,"Pankaj"); // copy name to str1
    strcpy(str2," Goswami");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}

*/

// Structures in C.

#include <stdio.h>
#include <string.h>
struct Books // structure is collection of data types .
{
char name[50];
char author[50];
int price;

};

int main()
{
    struct Books bk1 , bk2;
    strcpy(bk1.name,"C Programming");
    printf("%s\n",bk1.name);
    bk1.price = 65;
    printf("%d",bk1.price);
    
    return 0;
}