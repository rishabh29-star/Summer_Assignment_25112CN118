// wap for symmetric matrix
#include <stdio.h>
int main()
{
    int a[100][100];
    int r1, c1, c = 0, i, j;
    printf("enter the 1st row and columns:");
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
            if (a[i][j] == a[j][i] && i != j)
            {
                c++;
                break;
            }
        }
    }
    if (c == r1)
    {
        printf("matrix is symmetric ");
    }
    else
    {

        printf("matrix is non symmetric");
    }

    return 0;
}