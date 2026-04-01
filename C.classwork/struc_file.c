#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct student s1;
    printf("Enter the name, roll and marks : ");
    scanf("%s %d %f", &s1.name, &s1.roll, &s1.marks);
    printf("Name: %s\n Roll: %d\n marks : %f", s1.name, s1.roll, s1.marks);
    return 0;
}
