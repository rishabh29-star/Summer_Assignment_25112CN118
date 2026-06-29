//wap for strings operation
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];
    int choice;

    while (1) {
        printf("\n1.Length 2.Concatenate 3.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 3) break;

        printf("Enter string: ");
        scanf("%s", str1);

        switch (choice) {
            case 1:
                printf("Length: %lu\n", strlen(str1));
                break;
            case 2:
                printf("Enter string to add: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Combined: %s\n", str1);
                break;
            default: printf("Invalid option\n");
        }
    }
    return 0;
}
