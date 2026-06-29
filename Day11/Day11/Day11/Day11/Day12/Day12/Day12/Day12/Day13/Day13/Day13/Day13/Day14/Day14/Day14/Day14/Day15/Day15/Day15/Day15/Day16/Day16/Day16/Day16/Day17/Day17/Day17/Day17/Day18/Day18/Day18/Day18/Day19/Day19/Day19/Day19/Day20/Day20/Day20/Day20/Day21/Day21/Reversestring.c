#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    gets(str);  

    
    while (str[i] != '\0') {
        length++;
        i++;
    }

    
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }

    rev[length] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
