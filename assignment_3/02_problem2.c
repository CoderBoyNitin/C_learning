// Write a C program to search a data-item in the array, if it exists in the array, print the index

#include <stdio.h>

int main()
{
    int max, min, i, n, arr[50], oddsum = 0, sum = 0;
    float avg;
    int search, found = 0;

    printf("enter the  number of inputs : ");
    scanf("%d", &n);

    printf("enter the inputs :");
    for (i = 0; i < n; i++)
    {
        printf("elements -%d :", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] % 2 != 0)
        {
            oddsum += arr[i];
        }
    }

    avg = (float)sum / n;

    printf("The maximum of the following is %d\n", max);
    printf("The minimum of the following is %d\n", min);
    printf("The sum of odd numbers are following is %d\n", oddsum);
    printf("The average of the following is %f\n", avg);

    printf("the numbers in reverse order is :");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    printf("Enter a number to search in the array: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Element %d found at index %d\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
