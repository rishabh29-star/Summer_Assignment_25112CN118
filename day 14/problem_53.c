// wap to linear search of array
#include <stdio.h>
int main()
{
    int a[100], i, n,n1,c = 0, k = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the element of the array:");
        scanf("%d", &a[i]);
    }
    printf("enter the number:");
    scanf("%d", &n1);
    for (i = 1; i <= n; i++)
    {
        if (a[i]==n1)
        {
            printf("number is found/n");
            break;
        }
        
      
    }
    return 0;
}
