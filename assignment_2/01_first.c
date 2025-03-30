#include <stdio.h>

int main() {
    int x, y;
    long long result = 1;  // Store the result, using long long for large values

    // Taking user input
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    // Handle negative exponent case
    if (y < 0) {
        printf("Exponent should be non-negative.\n");
        return 1;
    }

    // Calculate x^y using a loop
    for (int i = 0; i < y; i++) {
        result *= x;
    }

    // Print the result
    printf("%d^%d = %lli\n", x, y, result);

    return 0;
}
