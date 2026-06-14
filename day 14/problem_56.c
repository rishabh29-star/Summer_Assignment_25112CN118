// wap to find duplicate
#include <stdio.h>
int main()
{
    int a[100], i, n,c, k = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the element of the array:");
        scanf("%d", &a[i]);
    }
    for (int  j = 1; j <=n; j++)
    {
        c=0;
        for (i = 1; i <= n; i++)
        {
            if (a[j]==a[i])
            {
                c++;
            }
            
            
        }
        if (c>1)
        {
            printf("%d is having duplicate\n",a[j]);
        }
        
    }
        return 0;
}
