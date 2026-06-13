// wap to count the even and odd element
#include <stdio.h>
int main()
{
    int a[100], i, n, c = 0, k = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the element of the array:");
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            c++;
        }
        else
        {
            k++;
        }
    }
    printf("no. of even element=%d\n", c);
    printf("no. of odd element=%d\n", k);
    return 0;
}
