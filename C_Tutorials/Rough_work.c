
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

// #include <stdio.h>
// #include <string.h>

// int len ;

// void parser(char str[])
// {
//     int arr[20];
//     int j = 0;
//     int len1 ;
//     for(int i = 0 ; i<len; i++){
//         if (str[i] == ' ' ){
//             arr[j] = i;      
//             j++;
//             len1 = j;
//             printf("after %d , %d\n",j,len1);

//         }
//     }
    
//     for(int j = 0; j<len1;j++){
//         printf("%d\n",arr[j]);
//     }
//     for (int k = arr[0]; k < arr[len1-1] ;k++){
//         printf("%c",str[k]);
//     }
// }

// int main()
// {
//     char string[] ="<span/> this is a heading2 </span>";
//     len = sizeof(string)/sizeof(string[0]);
//     printf("%d \n",len);
//     parser(string);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("enter size \n");
//     scanf("%d",&n);
//     int array[n];
//     for(int i =0; i< 5; i++){
//         printf("Enter value");
//         scanf("%d",array[i]);
        
//     }

//     for(int i =0; i< n; i++){
//     printf("Value in array at %d is :",i,array[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char *ptr;
//     int n;
    
//     printf("Please Enter size of your string \n");
//     scanf("%d",&n);

//     ptr = (char*) malloc(n*sizeof(char)); // here we have to enter value character by character

//     for (int i = 0; i<n ; i++){
//         printf("Please Enter %d character \n",i);
//         scanf("%s",&ptr[i]);      
//     }
   
//     printf("Name is : %s\n",ptr);
//     // for (int i = 0; i<n ; i++){
//     //     printf("Please Enter %d character \n",i);
//     //     scanf("%s",&ptr[i]);      
//     // }
   
//     // printf("Name is : %s\n",ptr);
//     free(ptr);
//     return 0;

// }
/*
#include <stdio.h>

int main()
{
    int a ;
    printf("enter value of a\n");
    scanf("%d",&a);
    printf("Value of a is : %d",a);
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *f;
	char c;
	f=fopen("1.txt","r");
	while((c=fgetc(f))!=EOF)
	{
		printf("%c",c);
	}
	fclose(f);
	return 0;
}