#include <stdio.h>

int main()
{
    int i, n;

    printf("input  numbers :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("number is %d\n and the cube of the %d is %d", i, i, (i * i * i));
    }

    return 0;
}