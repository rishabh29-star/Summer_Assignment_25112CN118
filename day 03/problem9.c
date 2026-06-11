#include <stdio.h>
int main()
{
   int n, i, c = 0;
   printf("enter the number :");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      if (n % i == 0)
      {
         c++;
      }
   }
   if (c == 2)
   {
      printf("no is prime"); /* code */
   }
   else
   {
      printf("no is not prime");
   }

   return 0;
}
