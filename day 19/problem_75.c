//wap for tranpose of  matrix
#include <stdio.h>
int main()
{
    int a[100][100];
    int r1, c1, i, j;
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

    printf("entered  matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    
    printf("tranpose matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}