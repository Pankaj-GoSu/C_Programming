
// #include <stdio.h>

// int main()
// {
//     int inp;
//     printf("\t\t\tWelcome to Unir Conversion program \n\n");
//     printf("Press :\n 1 => for kms to miles \n 2 => for intches to foot \n 3 => for cms to inches \n 4 => pound to kgs ");
//     scanf("%d",&inp);
//     if(inp == 1) {
//         kms_to_miles();
//     }
//     else if(inp == 2){
//         intches_to_feet();
//     }
//     else if(inp == 3){
//         cms_to_inches();
//     }
//     else if(inp == 4){
//         pound_to_kgs();
//     }
//     else{
//         printf("Please Check your input \n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     int arr[] ={4,5,6,7,8};
//     int len;
//     len = sizeof(arr)/sizeof(arr[0]);
//     printf("Size of array : %d\n",sizeof(arr));
//     printf("Size of one element : %d\n", sizeof(arr[0]));
//     printf("Length of arr is : %d",len);

// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char a;
//     printf("Enter a char :\n");
//     scanf("%c",&a);
//     switch(a)
//     {
//         case 'a':
//         printf("Hello");
//         break;
//         case 'b':
//         printf("Hi");
//         break;
//         default :
//             break;

//     }
   
// }

/*
Author : Pankaj Goswami
Purpose : Exercise 6
Date : 10/01/2022
*/

/*
parsing the String
*/

#include <stdio.h>
#include <string.h>

int len ;

void parser(char str[])
{
    int arr[20];
    int j = 0;
    int len1 ;
    for(int i = 0 ; i<len; i++){
        if (str[i] == ' ' ){
            arr[j] = i;      
            j++;
            len1 = j;
            printf("after %d , %d\n",j,len1);

        }
    }
    
    for(int j = 0; j<len1;j++){
        printf("%d\n",arr[j]);
    }
    for (int k = arr[0]; k < arr[len1-1] ;k++){
        printf("%c",str[k]);
    }
}

int main()
{
    char string[] ="<span/> this is a heading2 </span>";
    len = sizeof(string)/sizeof(string[0]);
    printf("%d \n",len);
    parser(string);
    return 0;
}