/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
9. Write a C program to read three numbers from keyboard and find out maximum out of these three. (nested if else) 
*/

#include<stdio.h>

int main()
{
     int a,b,c;
     printf("\n Enter First Number  :");
     scanf("%d",&a);
     printf("\n Enter Second Number :");
     scanf("%d",&b);
     printf("\n Enter Third Number  :");
     scanf("%d",&c);

     if(a>b)
     {
          if(a>c)
          {
                 printf("\n First Number %d is maximum",a);
          }
          else
          {
                 printf("\n Third Number %d is maximum",c);
          }
     }
     else
         {
          if(b>c)
          {
                printf("\n Second Number %d is maximum",b);
          }
          else
          {
                printf("\n Third Number %d is maximum",c);
          }
     }
 return 0;
}

