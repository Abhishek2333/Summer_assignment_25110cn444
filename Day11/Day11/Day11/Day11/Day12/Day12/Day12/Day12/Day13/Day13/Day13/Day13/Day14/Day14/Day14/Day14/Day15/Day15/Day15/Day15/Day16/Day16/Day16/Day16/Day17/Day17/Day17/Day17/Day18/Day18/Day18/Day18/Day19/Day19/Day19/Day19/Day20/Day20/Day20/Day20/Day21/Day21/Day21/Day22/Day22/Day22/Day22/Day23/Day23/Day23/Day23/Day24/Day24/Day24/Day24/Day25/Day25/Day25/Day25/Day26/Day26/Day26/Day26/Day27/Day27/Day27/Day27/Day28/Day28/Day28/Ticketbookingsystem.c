#include <stdio.h>
#include <string.h>

struct Ticket {
    int id;
    char name[50];
    int seats;
};

int main() {
    struct Ticket t[100];
    int totalSeats = 50;
    int n = 0;
    int choice, i, searchId, found;
    int seatsToBook;

    while (1) {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Bookings\n");
        printf("3. Cancel Ticket\n");
        printf("4. Check Available Seats\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (totalSeats <= 0) {
                    printf("No seats available!\n");
                    break;
                }

                printf("Enter Booking ID: ");
                scanf("%d", &t[n].id);

                printf("Enter Name: ");
                scanf("%s", t[n].name);

                printf("Enter number of seats to book: ");
                scanf("%d", &seatsToBook);

                if (seatsToBook <= totalSeats && seatsToBook > 0) {
                    t[n].seats = seatsToBook;
                    totalSeats -= seatsToBook;
                    n++;
                    printf("Ticket booked successfully!\n");
                } else {
                    printf("Invalid seats or not enough availability!\n");
                }
                break;

            case 2:
                printf("\nBooking Details:\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d, Name: %s, Seats: %d\n",
                           t[i].id, t[i].name, t[i].seats);
                }
                break;

            case 3:
                printf("Enter Booking ID to cancel: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (t[i].id == searchId) {
                        totalSeats += t[i].seats;

                        
                        for (int j = i; j < n - 1; j++) {
                            t[j] = t[j + 1];
                        }

                        n--;
                        found = 1;
                        printf("Booking cancelled successfully!\n");
                        break;
                    }
                }

                if (!found) {
                    printf("Booking not found!\n");
                }
                break;

            case 4:
                printf("Available Seats = %d\n", totalSeats);
                break;

            case 5:
                printf("Exiting system...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
