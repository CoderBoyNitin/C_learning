// Write C program to print the sum of the following series up to nth term, where x or n have to be taken
//from the user. Do not use the library function pow() for computation of xn.
// (a)1 + 2 + 3 + 4 + . . . upto nth terms
#include<stdio.h>

int main(){
    int sum = 0, n;

    printf("enter terms upto n :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    printf("the sum is %d", sum);   
    return 0;
}