#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i;
    unsigned long long factorial = 1; /* we can use int factorial
     =1; also that only provide under 12 so we use long long method*/
    printf("enter the number :");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("it is negative. so, it cannot perfrom.");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", num, factorial); /*
           like int we use %d for we use long long we should
           use %lld*/
    }
    return 0;
}
