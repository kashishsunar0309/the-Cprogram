#include <stdio.h>
#include <string.h>
struct employee
{
    char name[50];
    char id[50];
    int salary;
};
int main()
{
    struct employee s1;
    printf("Enter the name: ");
    scanf("%s", &s1.name);
    printf("Enter the id: ");
    scanf("%s", &s1.id);
    printf("Enter the salary: ");
    scanf("%d", &s1.salary);
    printf("\n--- Employee Detail ---\n");
    printf("NAME  : %s\n", s1.name);
    printf("ID    : %s\n", s1.id);
    printf("SALARY: %d\n", s1.salary);
    return 0;
}