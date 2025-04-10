#include <stdio.h>

int main() {
    int num1, num2, gcd;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using Euclidean algorithm with a for loop
    for (;;) {
        if (num2 == 0) {
            gcd = num1;
            break;
        }
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    // Displaying the result
    printf("GCD is %d\n", gcd);

    return 0;
}
