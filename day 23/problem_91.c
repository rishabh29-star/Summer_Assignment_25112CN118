// wap for  anagrams  strings
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int count[256] = {0};
    int isAnagram = 1;

    printf("Enter first string: ");
    scanf("%99s", s1);
    printf("Enter second string: ");
    scanf("%99s", s2);

    if (strlen(s1) != strlen(s2))
    {
        isAnagram = 0;
    }
    else
    {
        for (int i = 0; s1[i] != '\0'; i++)
        {
            count[(unsigned char)s1[i]]++;
            count[(unsigned char)s2[i]]--;
        }

        for (int i = 0; i < 256; i++)
        {
            if (count[i] != 0)
            {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
