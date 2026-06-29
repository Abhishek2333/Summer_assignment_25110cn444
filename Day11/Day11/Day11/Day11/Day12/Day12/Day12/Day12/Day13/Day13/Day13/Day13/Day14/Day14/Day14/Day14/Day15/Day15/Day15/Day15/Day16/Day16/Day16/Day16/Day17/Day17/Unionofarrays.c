#include <stdio.h>

int main() {
    int a[100], b[100], uni[200];
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
        uni[k++] = a[i];
    }

    
    for (i = 0; i < n2; i++) {
        int found = 0;
        for (j = 0; j < n1; j++) {
            if (b[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            uni[k++] = b[i];
        }
    }

    printf("Union of arrays:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", uni[i]);
    }

    return 0;
}
