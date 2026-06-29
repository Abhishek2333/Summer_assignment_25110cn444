#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[100];
    int n, i, choice, searchId, found;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);   

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    while (1) {
        printf("\n===== EMPLOYEE MENU =====\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEmployee Records:\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d, Name: %s, Salary: %.2f\n",
                           e[i].id, e[i].name, e[i].salary);
                }
                break;

            case 2:
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (e[i].id == searchId) {
                        printf("Employee Found!\n");
                        printf("ID: %d, Name: %s, Salary: %.2f\n",
                               e[i].id, e[i].name, e[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Employee not found!\n");
                }
                break;

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
