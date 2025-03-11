// 6. Write a C program to check whether a number entered by the user is even or odd.

#include<stdio.h>

int main(){
    int num;

    printf("enter number :");
    scanf("%d", &num);

    if (num % 2 == 0 ){
        printf("number is even");
    }else{
        printf("number is odd");
    }
    return 0;
}