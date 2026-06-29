#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int foundDuplicate = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    for (i = 0; i < n; i++) {
        int count = 1;

        // Skip already checked elements
        if (arr[i] == -1)
            continue;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // mark as visited
            }
        }

        if (count > 1) {
            printf("%d ", arr[i]);
            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate) {
        printf("No duplicates found");
    }

    return 0;
}
