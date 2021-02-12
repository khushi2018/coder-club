/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int no;   
 
     printf("\n Enter Day no between 1-7 :\n ");
     scanf("%d",&no);
     switch(no)
     {
      case 1:
       printf("\n Sunday");
       break;
      case 2:
       printf("\n Monday");
       break;
      case 3:
       printf("\n Tuesday");
       break;
      case 4:
       printf("\n Wednesday");
       break;
      case 5:
       printf("\n Thursday");
       break;
      case 6:
       printf("\n Friday");
       break;
      case 7:
       printf("\n Saturday");
       break;
      default:
       printf("\n Please Enter Proper Input");
     }  
}

