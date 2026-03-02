#include <stdio.h>
int main()
{
    int i, num, isprime = 1;
    printf("Enter the + positive number: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        isprime = 0;
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    if (isprime == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}