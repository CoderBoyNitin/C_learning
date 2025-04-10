// S = 1 − 2 + 3 − 4 . . . upto nth term.

#include<stdio.h>

int main(){
    int n, sum = 0;

    printf("enetr upto n terms :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
       if(i % 2 == 0){
        sum -= i;
       }
       else{
        sum += i;
       }
    }
    
    printf("the sum is %d", sum);
    return 0;
}