#include <stdio.h>
#include <conio.h> // for getch()

int main()
{
    int choice;

    printf("Choose an option:\n");
    printf("1. Find the smallest of three numbers\n");
    printf("2. Check if a character is a digit\n");
    printf("3. Find the average of three numbers\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        float num1, num2, num3, smallest, temp;
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        printf("Enter third number: ");
        scanf("%f", &num3);

        // find smallest using boolean trick
        temp = (num1 <= num2) * num1 + (num1 > num2) * num2;
        smallest = (temp <= num3) * temp + (temp > num3) * num3;

        printf("The smallest number is: %.2f\n", smallest);
    }
    else if (choice == 2)
    {
        char tt;
        int digit;
        printf("Enter a character: ");
        scanf(" %c", &tt); // space before %c to skip newline
        digit = tt >= '0' && tt <= '9';
        if (digit)
            printf("The character '%c' is a digit.\n", tt);
        else
            printf("The character '%c' is NOT a digit.\n", tt);
    }
    else if (choice == 3)
    {
        int a, b, c, sum;
        printf("Enter the value of a: ");
        scanf("%d", &a);
        printf("Enter the value of b: ");
        scanf("%d", &b);
        printf("Enter the value of c: ");
        scanf("%d", &c);

        sum = (a + b + c) / 3;
        printf("The average of the three numbers is: %d\n", sum);
    }
    else
    {
        printf("Invalid choice!\n");
    }

    getch(); // wait for key press before closing
    return 0;
}