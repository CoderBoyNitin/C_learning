#include<stdio.h>

int main(){
    int n,sum = 0,i;

    printf("enter number :");
    scanf("%d", &n);

    printf("the sum of given number is :");

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("%d", sum);
    
    return 0;
}