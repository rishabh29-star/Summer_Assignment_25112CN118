// wap remove space from string
#include <stdio.h>

int main() {
    char text[100];
    int j = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && text[i] != '\n') {
            text[j] = text[i];
            j++;
        }
    }
    text[j] = '\0';

    printf("String after removing spaces: %s\n", text);

    return 0;
}
