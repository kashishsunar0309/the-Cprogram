#include <stdio.h>
#include <conio.h>
void area()
{
    int l, b, area = 0;
    printf("enter the number l and b: ");
    scanf("%d%d", &l, &b);
    area = l * b;
    printf("The value of area is %d ", area);
}
int main()
{
    area();
    return 0;
}