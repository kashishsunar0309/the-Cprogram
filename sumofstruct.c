#include <stdio.h>
struct addition
{
    int a;
    int b;
    int sum;
};
int main()
{
    struct addition s1;
    printf("Enter the number a and b:"); // for no user input s1.a = 40;
    scanf("%d%d", &s1.a, &s1.b);         // for no user input s1.b = 50;
    s1.sum = s1.a + s1.b;
    printf("The sum of a and b is %d", s1.sum);
    return 0;
}