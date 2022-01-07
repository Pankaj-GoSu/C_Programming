/*
Author: Pankaj Goswami
Purpose : Goto Statement In C.
Date : 06/01/2022
*/

/*

Goto Statement in C :
    Also called jump statement in C.
    Used to transfer program control to a predefined label.
    Goto statement is preferable when we need to break multiple loops using a single 
    statement at the same time.

Syntax :
label:

goto label;



*/

/*

#include <stdio.h>
int main()
{
    printf("Hello Gosu\n");
 label:
    printf("We are inside label\n");
    goto end;
 
 goto label;
 end:
    printf("We are at end\n");
 return 0;   
}
*/

#include <stdio.h>

int main()
{
    int i,num;
    for(i=0;i<8;i++)
    {
        printf("%d\n",i);
        for (int j= 0; j<8;j++)
        {
            printf("Enter the number . enter 0 ro exit\n");
            scanf("%d",&num);
            if(num == 0)
            {
                goto end;
            }
        }
    }
    end:
        
    return 0;
}