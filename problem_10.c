#include <stdio.h>
int main()
{
    int n, i, j, c;
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
            printf("%d is prime\n", i); /* code */
        }
    }

    return 0;
}
