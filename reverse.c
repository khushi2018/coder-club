#include <stdio.h>

void main()
{
    int no,r;
    printf("Enter no.:\n");
    scanf("%d",&no);
    
    while(no>0)
    {
        r=no%10;
        printf("%d",r);
        no=no/10;
    }
}