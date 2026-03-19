#include <stdio.h>
#include <conio.h>
// with return type and without argument
float area_circle()
{
    float r;
    float pi = 3.14;
    printf("enter the value of r: ");
    scanf("%f", &r);
    float area_circle = pi * r * r;
}
int main()
{
    float result = area_circle();
    printf("the area of circle is %f", result);
    return 0;
}