/*
Author : Pankaj Goswami
Purpose : Exercise 6
Date : 10/01/2022
*/

/*
parsing the String
*/


/*

// My Method : i am considering space , if there is no spaces then this methof fails.
#include <stdio.h>
#include <string.h>

int len ;

void parser(char str[])
{
    int arr[20];
    int j = 0;
    int len1;
    for(int i = 0 ; i<len; i++){
        if (str[i] == ' ' ){
            arr[j] = i;
            j++;
            len1 = j;         
        }
    }
    for(int j = 0; j<len1;j++){
        printf("%d\n",arr[j]);
    }
    for (int k = arr[0]; k < arr[len1];k++){
        printf("%c",str[k]);
    }
}

int main()
{
    char string[] ="<span/> this is a heading2 </h>";
    len = sizeof(string)/sizeof(string[0]);
    printf("%d \n",len);
    parser(string);
    return 0;
}
*/

#include <stdio.h>
#include <string.h>

int len;
void parser(char str[])
{
    int in = 0;
    int index = 0;
    int index1 = 0;
    for(int i = 0; i < len; i++){
        if (str[i] == '<'){
            in = 1;
            continue;
        }
        else if (str[i] == '>'){
            in = 0;
            continue;
        }
        if (in == 0){
            str[index] = str[i];
            index ++;
        }
    }
    // printf("%s\n",str);

    str[index] = '\0';
    //Removing tralling space from starting
        while (str[0] == ' ')
        {
        // shift to left complete string. so we use for loop for that
            for(int i = 0;i<strlen(str);i++){
                str[i] = str[i+1];
            }
        
    }
    // Removing tralling space from end. 
    while(str[strlen(str)-1]==' '){
        str[strlen(str)-1] = '\0';
    }

}

int main()
{
    char string[] ="<span/>this is a heading2</h>";
    len = sizeof(string)/sizeof(string[0]);
    printf("%d \n",len);
    parser(string);
    printf("~%s~",string);
    return 0;
}