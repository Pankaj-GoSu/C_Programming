
#include <stdio.h>

int main()
{
    int inp;
    printf("\t\t\tWelcome to Unir Conversion program \n\n");
    printf("Press :\n 1 => for kms to miles \n 2 => for intches to foot \n 3 => for cms to inches \n 4 => pound to kgs ");
    scanf("%d",&inp);
    if(inp == 1) {
        kms_to_miles();
    }
    else if(inp == 2){
        intches_to_feet();
    }
    else if(inp == 3){
        cms_to_inches();
    }
    else if(inp == 4){
        pound_to_kgs();
    }
    else{
        printf("Please Check your input \n");
    }

    return 0;
}
