// wap for find the common character
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int i, j;
    printf("enter the first string:");
    gets(a);
    printf("enter the second string:");
    gets(b);
    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = 0; b[j] != '\0'; j++)
        {
            if (a[i] == b[j])
            {
                printf("%c", a[i]);
                break;
            }
        }
    }
    return 0;
}