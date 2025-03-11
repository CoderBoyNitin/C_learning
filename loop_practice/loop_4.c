#include<stdio.h>

int main(){
    int i,n, sum = 0;
    float avg;

    printf("input ten numbers :");
   

    for ( i = 1; i <= 10; i++)
    {
        printf("Number-%d :", i); 

       scanf("%d", &n);
       sum += n;
    }
    
    avg = sum / 10;

   printf("the sum and the average is %d\n %f\n", sum, avg);

    return 0;
}