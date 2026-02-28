#include <stdio.h>
int main()
{
    int rows, cols;
    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of cols: ");
    scanf("%d", &cols);

    int A[rows][cols], B[rows][cols], Sum[rows][cols];

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition of matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("\nSum of the matrices:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
