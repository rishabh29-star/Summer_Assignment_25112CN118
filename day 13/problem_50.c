//wap to sum of  array and average of array
#include <stdio.h>
int main()
{
    int a[100], i,n,c=0;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the element of the array:");
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++)
    {
       c+=a[i];
    }
    printf("sum of array=%d\n",c);
    printf("average of array=%d\n",(c/n));
    return 0;
}