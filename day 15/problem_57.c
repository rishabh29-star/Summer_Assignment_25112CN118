// wap for reverse of array
#include <stdio.h>

int main()
{
    int a[100], n;
    printf("enter the number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }

    for (int j = n - 1; j >= 0; j--)
    {

        printf("%d\n", a[j]);
    }
    return 0;
}