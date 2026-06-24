// wap for long word
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    int maxLen = 0, currLen = 0;
    int maxIdx = 0, currIdx = 0;
    int n = strlen(str);

    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxIdx = currIdx;
            }
            currLen = 0;
            currIdx = i + 1;
        } else {
            currLen++;
        }
    }

    printf("Longest word: ");
    for (int i = maxIdx; i < maxIdx + maxLen; i++) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
