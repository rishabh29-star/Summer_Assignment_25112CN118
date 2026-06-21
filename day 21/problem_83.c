// wap to count vowel & consonant
#include <stdio.h>

int main()
{
    int i, v = 0, c = 0;
    char s[100], ch;
    printf("enter the string in lowercase :-");
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }

    printf("no of vowel = %d\n", v);
    printf("no. of consonants = %d\n", c);
    return 0;
}