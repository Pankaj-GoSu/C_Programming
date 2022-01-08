/*
Author : Pankaj Goswami
Purpose : Exercise 2
Date : 07/01/2022
*/

/*
kms to miles 
intches to foot
cms to inches
pound to kgs
inches to meters
#=======>>> 1- first ask user what you want than give appropriate result.

*/

#include <stdio.h>

int main()
{
    int inp,inp1;
    float kms,miles,intches,foot,cms,inches,pound,kgs;
    
    printf("\t\tWelcome to Unit Conversion program \n\n");
    while(1) {
    printf("Press :\n 1 => for kms to miles \n 2 => for inches to foot \n 3 => for cms to inches \n 4 => pound to kgs \n");
    scanf("%d",&inp);
    
        if(inp == 1) {
            printf("Enter value in kms : \n");
            scanf("%f",&kms);
            miles = kms*0.6213712;
            printf("%0.2f in miles is = %0.2f\n\n",kms,miles);
            printf("for quit program press 1 for continue press any char\n");
            scanf("%d",&inp1);
            if (inp1 == 1){
                printf("Quiting the program...");
                break;
            }
            else{
                continue;
            }
            
        }
        else if(inp == 2){
            printf("Enter value in inches : \n");
            scanf("%f",&intches);
            foot = intches*0.0833333;
            printf("%f in foot is = %f \n",intches,foot);
            printf("for quit program press 1 for continue press any char\n");
            scanf("%d",&inp1);
            if (inp1 == 1){
                printf("Quiting the program...");
                break;
            }
            else{
                continue;
            }
        }
        else if(inp == 3){
            printf("Enter value in intches : \n");
            scanf("%f",&inches);
            cms = inches*2.539998984;
            printf("%f in foot is = %f \n",inches,cms);
            printf("for quit program press 1 for continue press any char\n");
            scanf("%d",&inp1);
            if (inp1 == 1){
                printf("Quiting the program...");
                break;
            }
            else{
                continue;
            }
        }
        else if(inp == 4){
            printf("Enter value in pound : \n");
            scanf("%f",&pound);
            kgs = pound*0.453592;
            printf("%0.2f in kgs is = %0.2f \n",pound,kgs);
            printf("for quit program press 1 for continue press any char\n");
            scanf("%d",&inp1);
            if (inp1 == 1){
                printf("Quiting the program...");
                break;
            }
            else{
                continue;
            }
        }
        else{
            printf("Please Check your input \n");
            printf("for quit program press 1 for continue press any char\n");
            scanf("%d",&inp1);
            if (inp1 == 1){
                printf("Quiting the program...");
                break;
            }
            else{
                continue;
            }
        }
    }
    return 0;
}
