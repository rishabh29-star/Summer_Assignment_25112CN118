// wap for merge the two sorted array
#include <stdio.h>

int main()
{
    int a[100], b[100], c[100];
    int i, n, j, n1, d = 0, min, temp;
    printf("enter the times of 1st sorted array:");
    scanf("%d", &n);
    printf("enter the times of 2nd sorted array:");
    scanf("%d", &n1);

    for (i = 0; i < n; i++)
    {
        printf("enter the element of 1st:-");
        scanf("%d", &a[i]);
        c[d] = a[i];
        d++;
    }

    for (i = 0; i < n1; i++)
    {
        printf("enter the element of 2nd:-");
        scanf("%d", &b[i]);
        c[d] = b[i];
        d++;
    }
    for (i = 0; i < d; i++)
    {
        min = i;
        for (j = i; j < d; j++)
        {
            if (c[min] > c[j + 1])
            {
                min = j + 1;
            }
        }
        temp = c[min];
        c[min] = c[i];
        c[i] = temp;
    }
    for (i = 0; i < d; i++)
    {

        printf("%d\n", c[i]);
    }
    return 0;
}