#include <stdio.h>
#include <math.h>
int main()
{
    int i, n2, n1, n;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        int r, c = 0;
        double s = 0;
        /* code */

        n2 = i;
        while (n2 != 0)
        {
            n2 = n2 / 10;
            c++;
        }
        n1 = i;
        while (n1 != 0)
        {
            r = n1 % 10;
            s = s + pow(r, c);
            n1 = n1 / 10;
        }
        if (i == s)
        {
            printf("number is armstrong=%d\n", i); /* code */
        }
    }
    return 0;
}