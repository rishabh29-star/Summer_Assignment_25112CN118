// wap for second largest element in array
#include <stdio.h>
int main()
{
    int a[100], i, n, n1, temp, max;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the element of the array:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= n; i++)
    {
        max = i;
        for (int j = i + 1; j < n; j++)
        {
            /* code */

            if (a[max] < a[j])
            {
                max = j;
            }
        }
        temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", a[2]);
        break; /* code */
    }

    return 0;
}
