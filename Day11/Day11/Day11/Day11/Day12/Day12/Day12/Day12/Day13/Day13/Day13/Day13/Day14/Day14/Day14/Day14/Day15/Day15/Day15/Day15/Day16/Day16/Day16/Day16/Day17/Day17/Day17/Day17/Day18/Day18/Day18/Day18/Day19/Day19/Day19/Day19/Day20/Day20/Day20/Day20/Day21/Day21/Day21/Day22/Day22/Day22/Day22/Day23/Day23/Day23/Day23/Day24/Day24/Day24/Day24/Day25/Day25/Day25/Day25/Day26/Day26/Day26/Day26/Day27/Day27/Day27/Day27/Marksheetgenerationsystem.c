#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;
};

int main() {
    struct Student s;
    int maxMarks = 500;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter marks of 5 subjects (out of 100 each):\n");
    scanf("%d %d %d %d %d", &s.m1, &s.m2, &s.m3, &s.m4, &s.m5);


    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    s.percentage = (s.total / (float)maxMarks) * 100;

    
    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 75)
        s.grade = 'B';
    else if (s.percentage >= 60)
        s.grade = 'C';
    else if (s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    
    printf("\n===== MARKSHEET =====\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks:\n");
    printf("Subject 1: %d\n", s.m1);
    printf("Subject 2: %d\n", s.m2);
    printf("Subject 3: %d\n", s.m3);
    printf("Subject 4: %d\n", s.m4);
    printf("Subject 5: %d\n", s.m5);
    printf("Total: %d / 500\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);
    printf("Grade: %c\n", s.grade);

    return 0;
}
