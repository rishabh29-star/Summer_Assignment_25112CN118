// wap for sum of matrix's column
#include <stdio.h>
int main()
{
    int a[100][100];
    int r1, c1, i, j;
    printf("enter the 1st row and columns:");
    scanf("%d%d", &r1, &c1);

    for (i = 1; i <= r1; i++)
    {
        for (j = 1; j <= c1; j++)
        {
            printf("enter the element:");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 1; i <= r1; i++)
    {
        int c = 0;
        for (j = 1; j <= c1; j++)
        {
            c += a[j][i];
        }
        printf("%d column sum = %d\n", i, c);
    }

    return 0;
}