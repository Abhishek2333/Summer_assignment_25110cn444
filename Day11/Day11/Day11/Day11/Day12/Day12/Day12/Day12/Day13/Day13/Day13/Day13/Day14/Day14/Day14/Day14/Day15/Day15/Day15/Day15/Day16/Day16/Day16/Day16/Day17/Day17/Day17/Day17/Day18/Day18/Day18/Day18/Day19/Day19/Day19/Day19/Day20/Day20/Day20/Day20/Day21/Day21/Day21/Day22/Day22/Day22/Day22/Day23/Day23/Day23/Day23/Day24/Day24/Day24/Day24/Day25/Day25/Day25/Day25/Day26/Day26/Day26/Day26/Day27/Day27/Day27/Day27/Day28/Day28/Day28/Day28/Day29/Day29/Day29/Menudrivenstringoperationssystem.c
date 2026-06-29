#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    while (1) {
        printf("\n===== STRING MENU SYSTEM =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Compare Strings\n");
        printf("4. Copy String\n");
        printf("5. Concatenate Strings\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length = %ld\n", strlen(str1));
                break;

            case 2:
                printf("Enter a string: ");
                scanf("%s", str1);

                printf("Reversed string: ");
                for (int i = strlen(str1) - 1; i >= 0; i--) {
                    printf("%c", str1[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);

                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 4:
                printf("Enter a string: ");
                scanf("%s", str1);

                strcpy(result, str1);
                printf("Copied string: %s\n", result);
                break;

            case 5:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);

                strcpy(result, str1);
                strcat(result, str2);

                printf("Concatenated string: %s\n", result);
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
