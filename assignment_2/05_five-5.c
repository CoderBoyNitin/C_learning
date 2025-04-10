// S = 2 + 4 + 6 + . . . upto nth term

#include<stdio.h>

int main(){
    int n ,sum = 0;
     
    printf("enter upto n terms");
    scanf("%d", &n);  

    for (int i = 0; i <= n; i++)
    {
       sum += 2*i;
    }
    
    printf("the sum is %d", sum);
   return 0;
}