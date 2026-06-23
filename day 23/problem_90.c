// wap for repeating character in string
#include <stdio.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int found = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] == 1)
        {
            printf("First repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
        count[(unsigned char)str[i]]++;
    }

    if (!found)
    {
        printf("No repeating character found.\n");
    }

    return 0;
}
