#include <stdio.h>

int main()
{
    int i, j, rows, k, t = 1, spc;

    printf("enter the number of rows :");
    scanf("%d", &rows);
    spc = rows  - 1;

    for (i = 1; i <= rows; i++)
    {
        for (k = 1; k <= spc; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", t++);
        }
        printf("\n");
        spc--;
    }

    return 0;
}