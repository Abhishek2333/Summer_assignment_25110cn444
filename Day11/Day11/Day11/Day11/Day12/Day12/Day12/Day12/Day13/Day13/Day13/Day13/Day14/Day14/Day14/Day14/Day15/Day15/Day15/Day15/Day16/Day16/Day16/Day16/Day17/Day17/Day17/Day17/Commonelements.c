#include <stdio.h>

int main() {
    int arr[100], n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Common (duplicate) elements are:\n");

    for (i = 0; i < n; i++) {
        int count = 0;

        
        int alreadyPrinted = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if (alreadyPrinted)
            continue;

        
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
