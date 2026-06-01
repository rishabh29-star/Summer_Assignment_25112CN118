#include <stdio.h>
int main()
{
    int n, i, c = 0;
    printf("enter the number");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("factor=%d\n",i);
        }
    }
   
    return 0;
}