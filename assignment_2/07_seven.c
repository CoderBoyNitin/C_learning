//write a C program to compute sum of the numbers between 20 to 30 and divisible by 2 and 3.

#include<stdio.h>

int main(){
    int  sum = 0  ;

    for (int i = 20; i <= 30; i++)
    {
        if(i % 2 == 0 && i % 3 == 0){
            sum += i;
    }
    
}
printf("the sum is %d", sum);
    return 0;
}

