// wap for missing number in a array
#include <stdio.h>

int main()
{
    int a[100], n, i, c = 0, t;
    printf("enter the number:");
    scanf("%d", &n);
    t = n * (n + 1) / 2;
    for (i = 0; i < n - 1; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
        c += a[i];
    }

    printf("missing number is %d", t - c);
    return 0;
}