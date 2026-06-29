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

    
    int max = 0;
    char maxChar = '\0';

    for (i = 0; i < 256; i++) {
        if (freq[i] > max && i != ' ') {  
            max = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d\n", max);

    return 0;
}
