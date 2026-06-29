#include <stdio.h>

int main() {
    int start, end, num, originalNum, digit, sum;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        originalNum = num;
        sum = 0;

        while (originalNum != 0) {
            digit = originalNum % 10;
            sum += digit * digit * digit;
            originalNum /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}
