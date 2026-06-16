// wap to find the  pair of sum
#include <stdio.h>
int main()
{
    int a[100], n, i,t;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }
    printf("enter the desire sum of pair:");
    scanf("%d", &t);
    for (i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]+a[j]==t)
            {
              printf("pair of sum is %d & %d\n",a[i],a[j]);
              break;
            }
        }
    }
    return 0;
}