/*
Author : Pankaj Goswami
Purpose :File modes, fgets,fputs,fgetc,fputc and more.
Date : 15/01/2022
*/

/*
Modes And Description:

r - Opens an existing text file for reading.
w - Opens a file for writing / also create file then write
a - Opens a text file for writing in appending mode./ also create file then write
r+ - This mode will open a text file for both reading and writing.
w+ - Open a text file for both reading and writing . it first trucates the file to zero length.
a+ - Open a file for both reading and writing . It create the file if it does not exist. 
     reading start from beginning but writing can only append to file.


==>> Other File I/O Functions :

=> fputc
=> fputs
=> fgetc
=> fgets

==>> fputc Function in C :
    Simplest function to write characters to a file is fputc.
    Syntax:
    1- int fputc(character,FILE pointer);
    2- It returns the written character written on success.
    3- On failure it return EOF(End of file character)
    3- The EOF is a constant defined in the header file stdio.h .

=>> fputs Function in C:
    1- fputs is used to write a null terminated string to a file in C.
    Syntax :
    int fputs(const char *s, FILE *fp);

==> fgetc Function in C:
    Simplest function to read characters from a file is fgetc.
    Syntax:
    int fgetc(File *fp);

==> fgets in C :
    fgets function is used to read a string from a file.
    int fgets(const char , int n , FILE *fp); // n is including null character.

*/
#include <stdio.h>

/*
// fgetc
int main ()
{
    FILE *fptr = NULL;
    fptr = fopen("myfile.txt","r");
    char c = fgetc(fptr);
    printf("The character I read was %c \n",c);
    c = fgetc(fptr);
    printf("The character I read was %c \n",c);
fclose(fptr);
    return 0;
}

*/


// fgets
int main()
{
    FILE *fptr = NULL;
    fptr = fopen("myfile.txt","r");
    char str[5];
    char str1[100];
   while(fgets(str,5,fptr))
   {
       printf("string is: %s",str);
   }
   return 0;
}

/*
int main()
{
    char c ;
    FILE *fptr = NULL;
    fptr = fopen("myfile.txt","r+"); // in r+ it replace upto the string is given to use after that remaing data is saved.
    // w+ first blank the file.
    fputc('o',fptr);
    fputs("This is Pankaj",fptr);
}
*/