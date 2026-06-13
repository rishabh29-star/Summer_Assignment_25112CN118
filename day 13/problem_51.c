// wap to display largest and smallest element of array
#include <stdio.h>
int main()
{
    int a[100], i, n, max, min;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the element of the array:");
        scanf("%d", &a[i]);
    }
    max = a[1];
    min = a[1];
    for (i = 1; i <= n; i++)
    {
        if (max < a[i])
        {
            max = a[i]; /* code */
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("largest element=%d\n", max);
    printf("smallest element=%d\n", min);
    return 0;
}