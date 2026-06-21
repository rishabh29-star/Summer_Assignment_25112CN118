// wap for count length of string
#include <stdio.h>

int main()
{
    int l = 0;
    char s[100];
    printf("enter the string :-");
    scanf("%s", s);
    while (s[l] != '\0')
    {
        l++;
    }
    printf("length of string = %d", l);
    return 0;
}