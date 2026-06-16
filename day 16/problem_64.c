// wap for remove duplicate
#include <stdio.h>

int main()
{
    int a[100], n, i, d, b[100], t = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        d=0;
        for (int j =0; j < t; j++)
        {
            if (a[i] == b[j])
            {
                d=1;
                break;
            }
        }
        if (d==0)
        {
            b[t] = a[i];
            t++;
        }
       
    }

    for (i = 0; i < t; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}