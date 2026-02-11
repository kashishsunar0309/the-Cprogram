#include <stdio.h>
#include <conio.h>
int main()
{
    int roll;
    for (roll = 1; roll <= 40; roll++)
    {
        if (roll == 21)
        {
            printf(" found :%d\n", roll);
            break; // if we use here continue its disappear 21 continue to roll>=40 from for loop statement
        }
        printf("search roll no :%d\n", roll);
    }
    return 0;
}