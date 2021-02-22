/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
10. Write a C program to check whether the entered character is capital, small letter, digit or any special character.
*/

#include<stdio.h>
int main()
{
     char ch;
     printf("\nEnter Any Character :");
     scanf("%c",&ch);
     if(ch>='0' && ch<='9')
     {
        printf("\n Entered Character is Digit");
     }
     else if(ch>='A' && ch<='Z')
     {
        printf("\n Entered Character is Capital Letter");
     }
     else if(ch>='a' && ch<='z')
     {
        printf("\n Entered Character is Small Letter");
     }
     else
     {
        printf("\n Entered Character is Special Character");
     }
     return 0;
}
