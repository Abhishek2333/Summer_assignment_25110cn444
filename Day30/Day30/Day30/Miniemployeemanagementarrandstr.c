#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    int empId[50];
    char empName[50][50];
    char department[50][50];
    float salary[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf("%s", empName[i]);

        printf("Enter Department: ");
        scanf("%s", department[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    
    printf("\n========== EMPLOYEE RECORDS ==========\n");
    printf("ID\tName\t\tDepartment\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               empId[i],
               empName[i],
               department[i],
               salary[i]);
    }

    return 0;
}
