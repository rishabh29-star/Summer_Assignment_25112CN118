#include <stdio.h>
int main()
{
    int n,a=0,b, i, j, c;
    printf("enter the number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        c = 0; /* code */

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            if (i>a)
            {
               b=a;
               a=i;
               i=b; /* code */
            }
             /* code */
        }
    }
   printf("%d",a);
    return 0;
}
