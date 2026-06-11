#include <stdio.h>
#include <math.h>
int main()
{
    int n2, i, c, r, s = 0, n;
    printf("enter the number");
    scanf("%d", &n);
    n2 = n;
    while (n2 != 0)
    {
        c = 1;
        r = n2 % 10;
        for (i = 1; i <= r; i++)
        {
            c *= i;
        }
        s = s + c;
        n2 = n2 / 10; /* code */
    }

    if (n == s)
    {
        printf("number is strong "); /* code */
    }
    else
    {
        printf("number is not strong ");
    }

    return 0;
}