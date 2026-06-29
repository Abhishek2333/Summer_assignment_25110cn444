#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int mainDiagSum = 0, secDiagSum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            
            if (i == j) {
                mainDiagSum += a[i][j];
            }
            if (i + j == n - 1) {
                secDiagSum += a[i][j];
            }
        }
    }

    printf("Main diagonal sum = %d\n", mainDiagSum);
    printf("Secondary diagonal sum = %d\n", secDiagSum);

    return 0;
}
