// wap for descending order  in array
#include <stdio.h>
int main()
{
    int a[100], i, min, n, j, temp;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[min] < a[j])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("descending order array-\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    return 0;
}