#include <stdio.h>
#include <math.h>
int main()
{
    int n2, r, c = 0, n1, n;
    double s = 0;
    printf("enter the number:");
    scanf("%d", &n);
    n1 = n;
    while (n != 0)
    {
        n = n / 10;
        c++;
    }
    n2 = n1;
    while (n1 != 0)
    {
        r = n1 % 10;
        s = s + pow(r, c);
        n1 = n1 / 10;
    }
    if (n2 == s)
    {
        printf("number is armstrong"); /* code */
    }
    else
    {
        printf("number is not armstrong");
    }

    return 0;
}