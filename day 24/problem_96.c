// wap for removing duplicating
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int hash[256] = {0}; 
    int currentIndex = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {

        int index = str[i] + 128;

        if (hash[index] == 0) {
            hash[index] = 1;
            str[currentIndex] = str[i];
            currentIndex++;
        }
    }
    str[currentIndex] = '\0';

    printf("Result: %s\n", str);
    return 0;
}
