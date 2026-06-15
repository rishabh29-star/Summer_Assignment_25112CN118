// wap for rotate array right(by 1 position)
#include <stdio.h>

int main()
{
    int a[100], n, b;
    printf("enter the number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }
    b = a[n - 1];
    for (int j = n - 1; j > 0; j--)
    {
        a[j] = a[j - 1];
    }
    a[0] = b;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}