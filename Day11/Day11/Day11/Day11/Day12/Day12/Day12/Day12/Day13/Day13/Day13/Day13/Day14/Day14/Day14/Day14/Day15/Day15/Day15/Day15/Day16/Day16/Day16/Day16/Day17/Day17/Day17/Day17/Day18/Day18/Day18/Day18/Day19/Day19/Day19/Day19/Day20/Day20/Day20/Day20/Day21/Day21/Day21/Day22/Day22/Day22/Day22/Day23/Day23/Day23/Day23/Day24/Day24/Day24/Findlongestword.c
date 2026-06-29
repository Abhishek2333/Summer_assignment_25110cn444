#include <stdio.h>

int main() {
    char str[200];
    int i = 0, len = 0, maxLen = 0;
    int start = 0, maxStart = 0;

    printf("Enter a string: ");
    gets(str);   

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: ");

    for (i = 0; i < maxLen; i++) {
        printf("%c", str[maxStart + i]);
    }

    printf("\nLength = %d\n", maxLen);

    return 0;
}
