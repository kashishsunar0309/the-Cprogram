#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter the value of a =");
    scanf("%d\n", &a);
    printf("%d", a--); // it is decrease the value of you give by -1
    printf("%d", a);   // it print the least decrease value of a input
    printf("%d", a++); // it print the increase value of latest by +1
    printf("%d", a++); // it print the increase value of latest by +1
    printf("%d", a++); // it print the increase value of latest by +1
    printf("%d", a);   // it print the latest valur of a
    getch();
}
