//wap for sort  words by length
#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    printf("enter the number:-");
    scanf("%d", &n);
    char a[100][50], temp[50];
    for (i = 0; i <= n; i++)
    {
        gets(a[i]);
    }
    for (i = 0; i <= n - 1; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (strlen(a[i])>strlen(a[j]))
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
    printf("words sorted by length\n");
    for (i = 0; i <= n; i++)
    {
        printf("%s\n", a[i]);
    }
    return 0;
}