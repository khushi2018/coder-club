
#include <stdio.h>

void main()
{
   int i, s, r, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   for (i = 1; i <= r; ++i, k = 0) 
   {
      for (s = 1; s <= r - i; ++s) 
      {
         printf("  ");
      }
      while (k != 2 * i - 1) 
      {
         printf("* ");
         ++k;
      }
      printf("\n");
    }
}   