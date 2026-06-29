#include <stdio.h>

int main() {
    int num, originalNum, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (originalNum == reverse)
        printf("%d is a Palindrome number.\n", originalNum);
    else
        printf("%d is not a Palindrome number.\n", originalNum);

    return 0;
}
