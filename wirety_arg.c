#include <stdio.h>
#include <conio.h>
int area(int a, int b)
{
    printf("enter the a and b:");
    scanf("%d%d", &a, &b);
    int area = a * b;
    printf("the area of a and b is %d", area);
}
int main()
{
    int a, b;
    area(a, b);
    return 0;
}