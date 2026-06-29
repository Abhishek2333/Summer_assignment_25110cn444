#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, da, hra, deduction, netSalary;
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

        printf("Basic Salary: ");
        scanf("%f", &e[i].basic);

        printf("DA: ");
        scanf("%f", &e[i].da);

        printf("HRA: ");
        scanf("%f", &e[i].hra);

        printf("Deduction: ");
        scanf("%f", &e[i].deduction);

      
        e[i].netSalary = e[i].basic + e[i].da + e[i].hra - e[i].deduction;
    }

    while (1) {
        printf("\n===== SALARY MENU =====\n");
        printf("1. Display All Salary Details\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nSalary Records:\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d, Name: %s, Net Salary: %.2f\n",
                           e[i].id, e[i].name, e[i].netSalary);
                }
                break;

            case 2:
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (e[i].id == searchId) {
                        printf("Employee Found!\n");
                        printf("ID: %d\nName: %s\nNet Salary: %.2f\n",
                               e[i].id, e[i].name, e[i].netSalary);
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
