// wap for multiplication of  two matrix
#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100];
    int r1, r2, c1, c2, i, j, k;
    printf("enter the 1st row and columns:");
    scanf("%d%d", &r1, &c1);
    printf("enter the 2nd row and columns:");
    scanf("%d%d", &r2, &c2);
    if (r2 != c1)
    {
        printf("multiplication is not possible");
    }
    else
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("enter the element:");
                scanf("%d", &a[i][j]);
            }
        }

        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("enter the 2nd one's element:");
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("|  %d |", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}