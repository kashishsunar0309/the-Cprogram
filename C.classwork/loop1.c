#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1, n;
    printf("enter the interger value for n:");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    getch();
}
