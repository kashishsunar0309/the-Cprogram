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
            break;
        }
        printf("search roll no :%d\n", roll);
    }
    return 0;
}