#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10];
    int i, j, temp;
    printf("Enter the 10 integer number: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in asscending order:");
    for (i = 0; i < 10; i++)
    {
        printf("%d \n\t\t\t  ", arr[i]);
    }
    return 0;
}
