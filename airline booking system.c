#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

struct airline {
    char fullname[25];
    char password[25];
    char destination[25];
    int seat_num;
    char email[25];
    int cancel_choice;
} a;

void airline_system();
void book_ticket();
void cancel_ticket();
void display_record();

int main() {
    airline_system();
    return 0;
}

void airline_system() {
    int choice;
    while (1) {
        printf("\n\t**********************************************\n");
        printf("\t\tWelcome to Yeti Airline System\n");
        printf("\t**********************************************\n");
        printf("\tPlease choose an option from below (1-4):\n");
        printf("\t1. Booking\n");
        printf("\t2. Ticket Cancel\n");
        printf("\t3. Display Record\n");
        printf("\t4. Exit\n");
        printf("\tEnter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline from buffer

        switch (choice) {
            case 1:
                book_ticket();
                break;
            case 2:
                cancel_ticket();
                break;
            case 3:
                display_record();
                break;
            case 4:
                printf("Exiting the system. Thank you for using Yeti Airline System.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

void book_ticket() {
    printf("Enter your Fullname: ");
    fgets(a.fullname, sizeof(a.fullname), stdin);
    a.fullname[strcspn(a.fullname, "\n")] = '\0'; // Remove newline

    printf("Enter your Password: ");
    fgets(a.password, sizeof(a.password), stdin);
    a.password[strcspn(a.password, "\n")] = '\0';

    printf("Enter your Email: ");
    fgets(a.email, sizeof(a.email), stdin);
    a.email[strcspn(a.email, "\n")] = '\0';

    printf("Enter your Destination: ");
    fgets(a.destination, sizeof(a.destination), stdin);
    a.destination[strcspn(a.destination, "\n")] = '\0';

    printf("Available seats:\n");
    printf("A\t1\t2\t3\t4\t5\t6\t7\n");
    printf("B\t1\t2\t3\t4\t5\t6\t7\n");
    printf("Choose your seat number: ");
    scanf("%d", &a.seat_num);

    printf("Your seat number is: A-%d\n", a.seat_num);
    printf("Total amount is 10000 Rs.\n");
}

void cancel_ticket() {
    printf("Do you want to cancel a ticket?\n");
    printf("[1] YES\n[2] NO\n");
    scanf("%d", &a.cancel_choice);
    getchar(); // Clear newline from buffer

    switch (a.cancel_choice) {
        case 1:
            printf("Enter your Fullname: ");
            fgets(a.fullname, sizeof(a.fullname), stdin);
            a.fullname[strcspn(a.fullname, "\n")] = '\0';

            printf("Enter your Password: ");
            fgets(a.password, sizeof(a.password), stdin);
            a.password[strcspn(a.password, "\n")] = '\0';

            printf("Your ticket has been cancelled successfully.\n");
            break;
        default:
            printf("No ticket cancelled.\n");
    }
}

void display_record() {
    printf("\n====================================\n");
    printf(" YETI AIRLINE ONLINE TICKET BOOKING\n");
    printf("====================================\n");
    printf("Total number of seats: 14\n");
    printf("Available seats: 10\n");
    printf("Flight times: 10:00 AM, 12:00 PM, 01:45 PM, 04:00 PM\n");
}
