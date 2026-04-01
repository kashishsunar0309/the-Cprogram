#include <stdio.h>
#include <conio.h>
void sum()
{
    int a, b, sum = 0;
    printf("enter the a and b values: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("the sum of number is %d\n", sum);
}
void sub()
{
    int a, b, su = 0;
    printf("enter the a and b values: ");
    scanf("%d%d", &a, &b);
    su = a - b;
    printf("the subtract of number is %d\n", su);
}
void mult()
{
    int a, b, mult = 0;
    printf("enter the a and b values: ");
    scanf("%d%d", &a, &b);
    mult = a * b;
    printf("the multiple of a and b is %d\n", mult);
}
int main()
{
    sum();
    sub();
    mult();
    return 0;
}
