#include <stdio.h>

int reverse = 0;

int reverseNumber(int num) {
    if (num == 0)
        return reverse;

    reverse = reverse * 10 + num % 10;
    reverseNumber(num / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverse = 0;
    reverseNumber(num);

    printf("Reversed number = %d\n", reverse);

    return 0;
}
