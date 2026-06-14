// wap for frequency of array
#include <stdio.h>
int main()
{
    int a[100], i, n, n1, c = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the element of the array:");
        scanf("%d", &a[i]);
    }
    printf("enter the number:");
    scanf("%d", &n1);
    for (i = 1; i <= n; i++)
    {
        if (a[i] == n1)
        {
            c++;
        }
    }
    printf("the frequency of %d=%d", n1, c);
    return 0;
}
