// 1. Write a C program to add three numbers and print the result. Here the three numbers have to be taken
// from the user

#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter number :");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("the sum is %d", a+b+c);
    return 0;
}