//wap for contact management 
#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact directory[10];
    int count = 0, choice;

    while (1) {
        printf("\n1. Add Contact\n2. View Contacts\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1 && count < 10) {
            printf("Enter Name: ");
            scanf("%s", directory[count].name);
            printf("Enter Phone: ");
            scanf("%s", directory[count].phone);
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++)
                printf("%d. %s - %s\n", i + 1, directory[i].name, directory[i].phone);
        } else break;
    }
    return 0;
}
