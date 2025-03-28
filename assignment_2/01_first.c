#include<stdio.h>

int main(){
    int n, sum = 0;
   
    for ( int i = 1; i <= 100; i++)
    { 
        if(i % 5 == 0){
            sum += i;
        }
    }
    printf("the sum of the integers is %d" , sum);
    
    return 0;
}