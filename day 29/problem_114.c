//wap for array operation
#include <stdio.h>

int main() {
    int arr[50] = {10, 20, 30}, n = 3, choice, val;

    while (1) {
        printf("\n1.Display 2.Insert 3.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 3) break;

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) 
                printf("%d ", arr[i]);
                printf("\n");
                break;
            case 2:
                printf("Enter value to append: ");
                scanf("%d", &val);
                arr[n++] = val;
                break;
            default:
             printf("Invalid option\n");
        }
    }
    return 0;
}
