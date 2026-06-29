#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }

    if (sum == originalNum)
        printf("%d is an Armstrong Number.\n", originalNum);
    else
        printf("%d is not an Armstrong Number.\n", originalNum);

    return 0;
}
