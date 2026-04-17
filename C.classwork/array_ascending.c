// Ascending order using array in c
#include <stdio.h>
void sortArray(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int number[10], i;
    printf("Enter 10 integer number: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }
    sortArray(number, 10);
    printf("Sorted array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", number[i]);
    }
}