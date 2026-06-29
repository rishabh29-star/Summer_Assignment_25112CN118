//wap for inventory management
#include <stdio.h>

struct Item {
    int id;
    char name[30];
};

int main() {
    struct Item list[10];
    int count = 0, choice;

    while (1) {
        printf("\n1.Add Item 2.View Items 3.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 3) break;

        switch (choice) {
            case 1:
                printf("Enter ID and Name: ");
                scanf("%d %s", &list[count].id, list[count].name);
                count++;
                break;
            case 2:
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s\n", list[i].id, list[i].name);
                }
                break;
            default: printf("Invalid option\n");
        }
    }
    return 0;
}
