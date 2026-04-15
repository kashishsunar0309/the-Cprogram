#include <stdio.h>
int sum(int k);
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    int result = sum(n);
    printf("The value of recursion is %d\n", result);
    return 0;
}
int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}