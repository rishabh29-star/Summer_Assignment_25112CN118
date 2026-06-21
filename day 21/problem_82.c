// wap for reverse string
#include <stdio.h>
#include <string.h>
int main()
{
    int temp, i, j;
    char s[100];
    printf("enter the string :-");
    scanf("%s", s);
    i = 0;
    j = strlen(s) - 1;
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    printf("%s", s);
    return 0;
}