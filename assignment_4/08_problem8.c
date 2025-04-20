// Write a C program that can add two matrices, A and B and store the result in another Matrix, C. Display
// the result.

#include <stdio.h>

int main()
{
    int i, j, n, arr1[10][10], arr2[10][10], arr3[10][10], sum = 0;

    printf("enter the size of the matrix (less than 5) : ");
    scanf("%d", &n);

    printf("enter the numbers in first matrix : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("elements - [%d][%d] :", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("enter the numbers in second matrix : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("elements - [%d][%d] :", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("the first matrix is :");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
    }

    printf("\nthe second matrix is :");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nthe addition of matrix is :");

    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
    }
    return 0;
}