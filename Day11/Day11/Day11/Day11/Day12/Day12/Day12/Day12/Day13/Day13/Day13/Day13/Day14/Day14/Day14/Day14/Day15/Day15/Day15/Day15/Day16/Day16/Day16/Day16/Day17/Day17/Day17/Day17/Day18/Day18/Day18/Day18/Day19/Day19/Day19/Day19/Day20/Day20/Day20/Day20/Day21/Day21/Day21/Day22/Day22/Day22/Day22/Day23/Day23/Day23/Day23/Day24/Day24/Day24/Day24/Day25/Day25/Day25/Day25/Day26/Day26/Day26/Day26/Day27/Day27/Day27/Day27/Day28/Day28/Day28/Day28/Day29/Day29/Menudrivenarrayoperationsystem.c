#include <stdio.h>

int main() {
    int a[100], n = 0;
    int choice, i, item, pos, found;

    while (1) {
        printf("\n===== ARRAY MENU SYSTEM =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Largest & Smallest\n");
        printf("5. Reverse Array\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter elements:\n");
                for (i = 0; i < n; i++) {
                    scanf("%d", &a[i]);
                }
                break;

            case 2:
                printf("Array elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &item);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (a[i] == item) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Element not found!\n");
                }
                break;

            case 4: {
                int max = a[0], min = a[0];

                for (i = 1; i < n; i++) {
                    if (a[i] > max) max = a[i];
                    if (a[i] < min) min = a[i];
                }

                printf("Largest element = %d\n", max);
                printf("Smallest element = %d\n", min);
                break;
            }

            case 5:
                printf("Reversed array: ");
                for (i = n - 1; i >= 0; i--) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
