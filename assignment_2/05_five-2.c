//(b) 1 + x + x2 + x3 + . . . upto nth terms

#include<stdio.h>

int main(){
    int n, sum= 0 ,x,term = 1;

    printf("enter upto n terms");
    scanf("%d", &n);

    printf("enter x : ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
       sum = sum + term;
        term = term * x;
    }
    
    printf("the sum is %d", sum);
    return 0;
}