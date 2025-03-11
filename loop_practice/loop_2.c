#include<stdio.h>

int main(){
    int i, sum ;
    printf("the sum of first ten natural numbers are\n");

    for ( i = 1; i <= 10; i++)
    {
       sum = sum + i;
      
    }
    
    printf("%d", sum);    
    return 0;
}