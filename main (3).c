/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
8. Write a program to read marks of a student from keyboard whether the student is pass or fail( using if else)
*/

#include<stdio.h>

int main()
{
     int marks;
     printf("\n Enter Marks from 0-70 :");
     scanf("%d",&marks);
         if(marks<23)
         {
              printf("\n Sorry ..! You are Fail");
         }
         else
         {
              printf("\nCongratulation ...! You are Pass");
         }
 return 0;
}
