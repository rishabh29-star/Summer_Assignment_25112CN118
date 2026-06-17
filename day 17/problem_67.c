// wap to intersection  the array
#include <stdio.h>

int main()
{
    int a[100], c[200], b[100];
    int d = 0, k = 0, j, n, i,g, n1;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }
    printf("enter the number:");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        printf("enter the element:");
        scanf("%d", &b[i]);
    }

    for ( i = 0; i <n; i++)
    {
        for ( j = 0; j < n1; j++)
        {
            if (a[i]==b[j])
            {
             d=0;
             for ( g= 0; g < k; g++)
             {
                if (a[i]==c[g])
                {
                    d=1;
                    break;
                }
                
             }
             if (d==0)
             {
                c[k]=a[i];
                k++;
             }
             break;
             
             
            }
            
        }
        
    }
    
    printf("intersection  of array :-\n");
    if (k==0)
    {
        printf("no common number");
    }
    else
    {
        
        
        for (i = 0; i < k; i++)
        {
            printf("%d\n", c[i]);
        }
    }

    return 0;
}