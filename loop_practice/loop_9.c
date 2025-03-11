#include<stdio.h>

int main(){
    int i,sum = 0, n;

    printf("the odd numbers upto given terms is :");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        printf("%d\n",2 * i - 1);
        sum += 2 * i - 1;  
    }
    printf("the sum is %d" ,sum);
    return 0;
}