/*
#include <stdio.h> // Preprocessor command

int main(){ // function
    printf("Hello World \n");
    return 0;
}

*/

#include <stdio.h>

int main()
{
    /*
    Data Type:
    int , float , char
    */

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