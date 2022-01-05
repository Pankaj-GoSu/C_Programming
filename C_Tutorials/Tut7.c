// ========= Operators in C ============

/*

# An operator is a symbol used to perform operation in given programming language 

==> Types of operators in C language
1- Arithmetic Operators
2- Relational operators 
3- logical Operators (And --> &&, Or --> || , not --> !)
4- Bitwise operators (Bitwise And(&) OR(|) XOR(^) , one's complement (~) , << (Left shift operator) , >> (right shift operator))
5- Assignment Operators (=,+=,-=,*=,/=)


# sizeof() --> Returns the size of a variable.
# & --> Returns the address of a varible
# * --> Pointer to a variable
# ?: --> Condtional Expression
*/
 
 #include <stdio.h>

 int main()
 {
     int a,b;
     a = 2;
     b = 4;
     printf("a+b = %d \n",a&b);
     printf("a-b = %d \n",a-b);
     printf("a*b = %d \n",a*b);
     printf("a/b = %d  \n",a/b);

     return 0;
 }