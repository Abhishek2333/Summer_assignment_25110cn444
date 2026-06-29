#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {

        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print characters
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch++);
        }

        ch -= 2;
        for (j = 1; j < i; j++) {
            printf("%c", ch--);
        }

        printf("\n");
    }

    return 0;
}
