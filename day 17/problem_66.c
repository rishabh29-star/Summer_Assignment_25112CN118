// wap to union the array
#include <stdio.h>

int main()
{
    int a[100], c[200], b[100];
    int d = 0, k = 0, j, n, i, n1;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);

        d = 0;
        for (j = 0; j < k; j++)
        {
            if (a[i] == c[j])
            {
                d = 1;
                break;
            }
        }
        if (d == 0)
        {
            c[k] = a[i];
            k++;
        }
    }
    printf("enter the number:");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        printf("enter the element:");
        scanf("%d", &b[i]);
        d = 0;
        for (j = 0; j < k; j++)
        {
            if (b[i] == c[j])
            {
                d = 1;
                break;
            }
        }
        if (d == 0)
        {
            c[k] = b[i];
            k++;
        }
    }
    printf("union of array :-\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\n", c[i]);
    }

    return 0;
}