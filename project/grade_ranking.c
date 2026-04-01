#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d", &marks);
    if (marks <= 30 && marks >= 0)
    {
        printf("fail");
    }
    else if (marks <= 30 && marks <= 100)
    {
        printf("you got a grade C");
    }
    else if (marks >= 70 && marks <= 100)
    {
        printf("you got a grade B");
    }
    else if (marks < 90 && marks <= 100)
    {
        printf("you got a grade A");
    }
    else if (marks > 90 && marks <= 100)
    {
        printf("you got a grade A+");
    }
    else
    {
        printf("wrong marks");
    }
    return 0;
}
