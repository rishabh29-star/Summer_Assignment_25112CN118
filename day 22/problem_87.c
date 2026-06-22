// wap for character frequency
#include <stdio.h>
int main() {
    char text[100];
    int frequency[256] = {0};
    printf("enter the string:");
    gets(text);
    
    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char index = text[i];
        frequency[index]++;
    }

    printf("Input String: \"%s\"\n\n", text);
    printf("Character frequencies:\n");
    
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            if (i == ' ') {
                printf("'Space': %d\n", frequency[i]);
            } else {
                printf("'%c': %d\n", i, frequency[i]);
            }
        }
    }

    return 0;
}
