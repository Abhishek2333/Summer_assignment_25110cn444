#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item i[100];
    int n = 0;
    int choice, searchId, found;
    int qty, k;

    while (1) {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Inventory\n");
        printf("3. Search Item\n");
        printf("4. Update Stock\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &i[n].id);

                printf("Enter Item Name: ");
                scanf("%s", i[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &i[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &i[n].price);

                n++;
                printf("Item added successfully!\n");
                break;

            case 2:
                printf("\nInventory List:\n");
                for (k = 0; k < n; k++) {
                    printf("ID: %d, Name: %s, Qty: %d, Price: %.2f\n",
                           i[k].id, i[k].name, i[k].quantity, i[k].price);
                }
                break;

            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (k = 0; k < n; k++) {
                    if (i[k].id == searchId) {
                        printf("Item Found!\n");
                        printf("ID: %d, Name: %s, Qty: %d, Price: %.2f\n",
                               i[k].id, i[k].name, i[k].quantity, i[k].price);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Item not found!\n");
                }
                break;

            case 4:
                printf("Enter Item ID to update: ");
                scanf("%d", &searchId);

                found = 0;

                for (k = 0; k < n; k++) {
                    if (i[k].id == searchId) {
                        printf("1. Add Stock\n2. Remove Stock\nEnter choice: ");
                        scanf("%d", &choice);

                        printf("Enter quantity: ");
                        scanf("%d", &qty);

                        if (choice == 1) {
                            i[k].quantity += qty;
                            printf("Stock added successfully!\n");
                        }
                        else if (choice == 2) {
                            if (qty <= i[k].quantity) {
                                i[k].quantity -= qty;
                                printf("Stock removed successfully!\n");
                            } else {
                                printf("Not enough stock!\n");
                            }
                        } else {
                            printf("Invalid choice!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Item not found!\n");
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
