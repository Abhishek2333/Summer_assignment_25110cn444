#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("===== SIMPLE QUIZ GAME =====\n");

    
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    
    printf("\n2. Which is the largest planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    
    printf("\n3. 2 + 2 = ?\n");
    printf("1. 3\n2. 4\n3. 5\n4. 6\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    
    printf("\n===== RESULT =====\n");
    printf("Your score = %d / 3\n", score);

    if (score == 3) {
        printf("Excellent!\n");
    } else if (score == 2) {
        printf("Good!\n");
    } else {
        printf("Try again!\n");
    }

    return 0;
}
