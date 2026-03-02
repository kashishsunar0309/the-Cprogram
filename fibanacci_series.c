#include <stdio.h>
int main()
{
    int num, first = 0, second = 1, next, i;
    printf("Enter the number :");
    scanf("%d", &num);
    printf("Fibanacci series: ");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}