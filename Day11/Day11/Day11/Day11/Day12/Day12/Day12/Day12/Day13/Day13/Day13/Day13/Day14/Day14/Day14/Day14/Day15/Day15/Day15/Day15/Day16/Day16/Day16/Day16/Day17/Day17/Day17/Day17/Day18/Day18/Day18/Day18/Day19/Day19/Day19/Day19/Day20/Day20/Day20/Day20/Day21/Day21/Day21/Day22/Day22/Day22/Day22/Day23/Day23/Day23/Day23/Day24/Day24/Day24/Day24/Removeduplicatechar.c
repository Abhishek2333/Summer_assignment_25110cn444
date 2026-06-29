#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;
    int freq[256] = {0};

    printf("Enter a string: ");
    gets(str);  
    while (str[i] != '\0') {
        if (freq[(int)str[i]] == 0) {
            result[j] = str[i];
            j++;
            freq[(int)str[i]] = 1;
        }
        i++;
    }

    result[j] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}
