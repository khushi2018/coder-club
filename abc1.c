#include <stdio.h>

void main()
{
    char i,j;
    
    for (i=69;i>=65;i--)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}