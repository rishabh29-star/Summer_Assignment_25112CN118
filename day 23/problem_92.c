// wap for maximum occuring character
#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};
    int max = -1;
    char maxChar;

    printf("Enter a string: ");
    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (max < count[(unsigned char)str[i]]) {
            max = count[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c (appears %d times)\n", maxChar, max);

    return 0;
}
