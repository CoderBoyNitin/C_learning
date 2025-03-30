#include <stdio.h>


long long power(int x, int y) {
    long long result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    
    
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);
    
    
    if (y < 0) {
        printf("Exponent should be non-negative.\n");
    } else {
       
        long long result = power(x, y);
        printf("%d^%d = %lld\n", x, y, result);
    }
    
    return 0;
}
