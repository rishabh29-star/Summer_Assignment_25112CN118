// wap to merge the array
#include <stdio.h>

int main()
{
    int a[100], n,n1, i, c[200], b[100], t = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
        c[t]=a[i];
        t++;
    }
    printf("enter the number:");
    scanf("%d", &n1);
    for (int j = 0; j <n1; j++)
    {
        printf("enter the element:");
        scanf("%d", &b[j]);
        c[t]=b[j];
        t++;  
    }
    for ( int k= 0; k<t; k++)
    {
        printf("%d\n",c[k]);
    }
    
    return 0;
}