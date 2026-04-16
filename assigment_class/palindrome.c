#include <stdio.h>
#include <string.h>
int main()
{
    char num[100], rev[100];
    printf("Enter the number: ");
    scanf("%s", num);

    strcpy(rev, num); // copy original
    strrev(rev);      // reverse copy

    if (strcmp(num, rev) == 0)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not");
    }
    return 0;
}
