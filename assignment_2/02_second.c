#include <stdio.h>

int main()
{
    int number;
    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &number);
    // Outer if-else
    if (number > 0)
    {
        printf("The number is positive.\n");
    }

    else if (number < 0)
    {
        printf("The number is negative.\n");
    }

    else {
        printf("not a number");
}
    return 0;
}