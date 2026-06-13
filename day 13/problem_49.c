//wap to input array and display array
#include <stdio.h>
int main()
{
    int a[100], i, n;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the element of the array:");
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    return 0;
}