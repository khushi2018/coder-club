/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int i,no,f=1;
    printf("Enter no to find out factorial:\n");
    scanf("%d",&no);
    i=1;
    while(i<=no)
    {
        f=f*i;
        i++;
    }
    printf("factorial=%d",f);
}

