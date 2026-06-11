#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, n, i;
    printf("enter the number:");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("0"); /* code */
    }
    else if (n == 2)
    {
        printf("1"); /* code */
    }

    else
    {

        for (i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d\n", c);
    }
    return 0;
}