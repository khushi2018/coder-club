#include <stdio.h>

void main()
{
    int p,n,a,i;
    p=0;
    n=1;
    printf("%d%d",p,n);
    i=1;
    while(i<=15)
    {
        a=p+n;
        printf("%d",a);
        p=n;
        n=a;
        i++;
    }
}
