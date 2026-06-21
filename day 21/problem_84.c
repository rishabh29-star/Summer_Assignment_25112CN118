//wap for lowercase string to uppercase
#include <stdio.h>

int main()
{
    int i;
    char s[100], ch;
    printf("enter the string in lowercase :-");
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }

    printf("uppercase string :- %s\n", s);
    return 0;
}