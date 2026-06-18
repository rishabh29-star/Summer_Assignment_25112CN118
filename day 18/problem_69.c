//wap for bubble sort in array
#include <stdio.h>
int main()
{
    int a[100], i, n, j, temp;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("sorted array-\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    return 0;
}