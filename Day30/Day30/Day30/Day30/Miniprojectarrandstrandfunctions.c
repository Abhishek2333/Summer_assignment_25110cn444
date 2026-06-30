#include <stdio.h>
#include <string.h>

#define MAX 50

void addStudents(int roll[], char name[][50], float marks[], int n);
void displayStudents(int roll[], char name[][50], float marks[], int n);

int main()
{
    int n;
    int roll[MAX];
    char name[MAX][50];
    float marks[MAX];

    printf("Enter number of students: ");
    scanf("%d", &n);

    addStudents(roll, name, marks, n);
    displayStudents(roll, name, marks, n);

    return 0;
}


void addStudents(int roll[], char name[][50], float marks[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
}


void displayStudents(int roll[], char name[][50], float marks[], int n)
{
    int i;

    printf("\n========== STUDENT RECORDS ==========\n");
    printf("Roll No.\tName\t\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%.2f\n",
               roll[i], name[i], marks[i]);
    }
}
