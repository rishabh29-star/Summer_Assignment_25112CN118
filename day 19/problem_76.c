//wap for sum  of diagonal element of  matrix
#include <stdio.h>
int main()
{
    int a[100][100];
    int r1, c1, i, j,c=0;
    printf("enter the  row and columns:");
    scanf("%d%d", &r1, &c1);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("enter the element:");
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if ( i==j ||  i+j==r1-1)
            {
                c+=a[i][j];

            }
            
        }
        
    }
  for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
   
            printf("sum of diagional element=%d", c);
   
    return 0;
}


