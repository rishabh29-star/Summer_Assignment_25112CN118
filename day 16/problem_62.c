// wap for maximum frequency number in a array
#include <stdio.h>

int main()
{
    int a[100], n, i, c, d, t = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c++;
            }
        }
        if (c > t)
        {
            t = c;
            d = a[i];
        }
    }

    printf("maximum frequency number is %d with %d", d, t);
    return 0;
}