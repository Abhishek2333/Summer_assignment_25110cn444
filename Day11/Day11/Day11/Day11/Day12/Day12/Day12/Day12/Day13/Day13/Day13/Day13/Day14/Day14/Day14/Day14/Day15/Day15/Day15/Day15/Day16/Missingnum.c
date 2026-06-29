#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0, total, missing;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (from 1 to %d with one missing):\n", n, n + 1);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    
    total = (n + 1) * (n + 2) / 2;

    missing = total - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}
