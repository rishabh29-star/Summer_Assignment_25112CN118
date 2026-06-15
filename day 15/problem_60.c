// wap for moves zero in end
#include <stdio.h>

int main()
{
    int a[100], n, c = 0;
    printf("enter the number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[c] = a[i];
            c++;
        }
    }

    while (c < n)
    {
        a[c] = 0;
        c++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}