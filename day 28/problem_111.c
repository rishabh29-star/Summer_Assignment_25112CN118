//wap for tickrt booking management
#include <stdio.h>

int main() {
    int seats[5] = {0, 0, 0, 0, 0}; 
    int choice, seatNum;

    while (1) {
        printf("\n1. Book Ticket\n2. View Seats\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter seat number (1-5): ");
            scanf("%d", &seatNum);
            if (seatNum < 1 || seatNum > 5) printf("Invalid seat!\n");
            else if (seats[seatNum-1] == 1) printf("Seat already booked!\n");
            else {
                seats[seatNum-1] = 1;
                printf("Seat %d booked successfully!\n", seatNum);
            }
        } else if (choice == 2) {
            for (int i = 0; i < 5; i++)
                printf("Seat %d: %s | ", i + 1, seats[i] ? "Booked" : "Available");
            printf("\n");
        } else break;
    }
    return 0;
}