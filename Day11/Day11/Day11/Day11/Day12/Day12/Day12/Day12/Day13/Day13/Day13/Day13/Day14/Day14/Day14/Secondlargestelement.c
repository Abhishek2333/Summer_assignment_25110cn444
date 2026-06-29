#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize
    largest = second = -2147483648;  // very small value

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("Second largest element does not exist.\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}
