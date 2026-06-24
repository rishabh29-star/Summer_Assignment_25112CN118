// wap for check strings are rotations
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        printf("Strings are not rotations\n");
    } else {
        strcpy(temp, s1);
        strcat(temp, s1);

        if (strstr(temp, s2) != NULL) {
            printf("Strings are rotations\n");
        } else {
            printf("Strings are not rotations\n");
        }
    }

    return 0;
}