#include <stdio.h>

int main() {
    int a[100], b[100], inter[100];
    int n1, n2, i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                inter[k++] = a[i];
                break;
            }
        }
    }

    printf("Intersection of arrays:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", inter[i]);
    }

    return 0;
}
