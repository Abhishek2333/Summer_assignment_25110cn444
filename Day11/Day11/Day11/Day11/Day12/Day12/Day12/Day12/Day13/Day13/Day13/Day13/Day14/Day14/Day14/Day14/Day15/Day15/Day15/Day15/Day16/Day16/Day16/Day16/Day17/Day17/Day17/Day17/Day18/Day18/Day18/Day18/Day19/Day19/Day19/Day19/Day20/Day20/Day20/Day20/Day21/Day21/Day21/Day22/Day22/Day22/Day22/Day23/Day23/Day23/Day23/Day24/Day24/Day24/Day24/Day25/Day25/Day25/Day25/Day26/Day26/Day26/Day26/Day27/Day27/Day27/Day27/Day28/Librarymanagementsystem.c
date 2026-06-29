#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int isIssued;   
};

int main() {
    struct Book b[100];
    int n, i, choice, searchId, found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);

        b[i].isIssued = 0;
    }

    while (1) {
        printf("\n===== LIBRARY MENU =====\n");
        printf("1. Display All Books\n");
        printf("2. Search Book by ID\n");
        printf("3. Issue Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nBook List:\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d, Title: %s, Author: %s, Status: %s\n",
                           b[i].id, b[i].title, b[i].author,
                           b[i].isIssued ? "Issued" : "Available");
                }
                break;

            case 2:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (b[i].id == searchId) {
                        printf("Book Found!\n");
                        printf("ID: %d, Title: %s, Author: %s, Status: %s\n",
                               b[i].id, b[i].title, b[i].author,
                               b[i].isIssued ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found!\n");
                }
                break;

            case 3:
                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (b[i].id == searchId) {
                        found = 1;
                        if (b[i].isIssued == 0) {
                            b[i].isIssued = 1;
                            printf("Book issued successfully!\n");
                        } else {
                            printf("Book already issued!\n");
                        }
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found!\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
