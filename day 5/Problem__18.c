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
            c += i;
        }
    }
    if (n == c)
    {
        printf("number is perfect number"); /* code */
    }
    else
    {
        printf("number is not perfect number"); /* code */
    }
    return 0;
}