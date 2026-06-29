#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);   
    while (str[i] != '\0') {
        length++;
        i++;
    }

    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");

    return 0;
}
