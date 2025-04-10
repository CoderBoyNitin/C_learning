// Write C program to check whether an input integer is power of two or not. As for example 23 = 8

#include<stdio.h>
#include<math.h>

int main(){
    int n;

    printf("enter a number :");
    scanf("%d", &n);

    if(pow(2,n)){
        printf("number is ");
    }
    return 0;
}