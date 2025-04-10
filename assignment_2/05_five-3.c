#include<stdio.h>

int main(){
    int n, x;
    float sum= 1.0 ,factorial = 1.0, term = 1;

    printf("enter upto n terms :");
    scanf("%d", &n);

    printf("enter x : ");
    scanf("%d", &x);

    for (int i = 1; i < n; i++)
    {
        term *= x;      
        factorial *= i; 
        sum += term / factorial;
    }
    printf("the sum is %f", sum);
    return 0;
}