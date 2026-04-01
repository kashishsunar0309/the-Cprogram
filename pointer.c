#include <stdio.h>
int sub = 0;
void subtract()
{
    int a, b, *p1, *p2;
    printf("Enter the number a and b: ");
    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    sub = *p1 - *p2;
}
int main()
{
    subtract();
    printf("The sub of the a and b is %d", sub);
    return 0;
}