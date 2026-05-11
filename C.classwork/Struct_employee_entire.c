#include <stdio.h>
#include <conio.h>
struct employee
{
    int e_id;
    char e_name[50];
    float salary;
};
int main()
{
    int n, i, found = 0;
    printf("Enter the number of employees :");
    scanf("%d", &n);
    struct employee emp[n];
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the details of employee: %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].e_id);
        printf("Enter Employee Name: ");
        scanf("%s", emp[i].e_name);
        printf("Enter the Salary Amount: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\n === Employee with less salary then 10,000===\n");
    printf("%10s %20s %15s\n", "E_ID", "E_NAME", "SALARY_AMOUNT");
    for (i = 0; i < n; i++)
    {
        if (emp[i].salary < 10000)
        {
            printf("%10d%20s%15.2f\n", emp[i].e_id, emp[i].e_name, emp[i].salary);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("NO EMPLOYEE FOUND WITH SALARY LESS THAN 10,000\n");
    }
    return 0;
}