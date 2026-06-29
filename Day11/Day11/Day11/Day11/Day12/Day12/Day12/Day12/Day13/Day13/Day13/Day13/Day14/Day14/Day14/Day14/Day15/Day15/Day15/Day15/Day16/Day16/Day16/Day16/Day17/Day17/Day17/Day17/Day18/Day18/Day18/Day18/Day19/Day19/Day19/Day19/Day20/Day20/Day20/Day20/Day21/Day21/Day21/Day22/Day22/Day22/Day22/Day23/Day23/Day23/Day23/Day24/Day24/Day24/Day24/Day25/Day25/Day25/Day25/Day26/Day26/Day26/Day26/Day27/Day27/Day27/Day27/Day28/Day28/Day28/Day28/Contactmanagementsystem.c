#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int n = 0;
    int choice, i, found;
    char searchName[50];

    while (1) {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Name: ");
                scanf("%s", c[n].name);

                printf("Enter Phone: ");
                scanf("%s", c[n].phone);

                n++;
                printf("Contact added successfully!\n");
                break;

            case 2:
                printf("\nContact List:\n");
                for (i = 0; i < n; i++) {
                    printf("Name: %s, Phone: %s\n",
                           c[i].name, c[i].phone);
                }
                break;

            case 3:
                printf("Enter name to search: ");
                scanf("%s", searchName);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (strcmp(c[i].name, searchName) == 0) {
                        printf("Contact Found!\n");
                        printf("Name: %s, Phone: %s\n",
                               c[i].name, c[i].phone);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Contact not found!\n");
                }
                break;

            case 4:
                printf("Enter name to delete: ");
                scanf("%s", searchName);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (strcmp(c[i].name, searchName) == 0) {

                        
                        for (int j = i; j < n - 1; j++) {
                            c[j] = c[j + 1];
                        }

                        n--;
                        found = 1;
                        printf("Contact deleted successfully!\n");
                        break;
                    }
                }

                if (!found) {
                    printf("Contact not found!\n");
                }
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
