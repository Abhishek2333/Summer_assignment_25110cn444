#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i = 0;

    printf("Enter a string: ");
    gets(str);   
    while (str[i] != '\0') {
        freq[(int)str[i]]++;
        i++;
    }

    
    i = 0;
    while (str[i] != '\0') {
        if (freq[(int)str[i]] == 1) {
            printf("First non-repeating character = %c\n", str[i]);
            return 0;
        }
        i++;
    }

    printf("No non-repeating character found.\n");

    return 0;
}
