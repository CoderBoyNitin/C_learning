// Write C programs to evaluate the following expressions:
// (b) 5x3 + 4x2y2 + 4y3 + 30



#include <stdio.h>
#include <math.h>

int main()
{
    // int a = 5,b = 4,c = 4, d = 30;
    int result;
    int x, y;

    printf("enter x : ");
    scanf("%d", &x);
    printf("enter y : ");
    scanf("%d", &y);

    result = 5 * pow(x, 3) + 4 * pow(x, 2) * pow(y, 2) + 4 * pow(y, 3) + 30;

    printf("result is %d", result );
    return 0;
}