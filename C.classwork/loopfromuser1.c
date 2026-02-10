#include <stdio.h>

int main()
{
    int j, a = 0;
    printf("enter the value:-");
    scanf("%d", &j);
    while (a < j)
    {
        printf("%d ", a);
        a++;
    }
    return 0;
}
