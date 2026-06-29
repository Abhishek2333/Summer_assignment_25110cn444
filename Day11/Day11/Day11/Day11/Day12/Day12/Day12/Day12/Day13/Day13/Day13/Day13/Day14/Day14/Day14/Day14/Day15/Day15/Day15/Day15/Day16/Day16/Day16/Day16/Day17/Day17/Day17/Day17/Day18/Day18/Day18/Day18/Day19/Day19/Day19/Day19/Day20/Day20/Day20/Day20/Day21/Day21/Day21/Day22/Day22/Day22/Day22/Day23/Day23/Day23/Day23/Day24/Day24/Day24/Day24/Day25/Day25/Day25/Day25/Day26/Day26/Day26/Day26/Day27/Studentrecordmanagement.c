#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i, choice, searchRoll, found;

    printf("Enter number of students: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);   

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Display All Students\n");
        printf("2. Search Student by Roll No\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nStudent Records:\n");
                for (i = 0; i < n; i++) {
                    printf("Roll: %d, Name: %s, Marks: %.2f\n",
                           s[i].roll, s[i].name, s[i].marks);
                }
                break;

            case 2:
                printf("Enter roll number to search: ");
                scanf("%d", &searchRoll);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (s[i].roll == searchRoll) {
                        printf("Student Found!\n");
                        printf("Roll: %d, Name: %s, Marks: %.2f\n",
                               s[i].roll, s[i].name, s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Student not found!\n");
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
