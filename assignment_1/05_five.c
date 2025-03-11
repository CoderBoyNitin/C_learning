// Write a C program that can take three integer numbers as input from the user and prints the largest
// among them.

#include<stdio.h>

int main(){
    int a,b,c,greatest;

    printf("enter first number :");
    scanf("%d",&a);

    printf("enter first number :");
    scanf("%d",&b);

    printf("enter first number :");
    scanf("%d",&c);

    if(a >= b && a >= c){
        greatest = a;
    }else if(b >= a && b >= c){
        greatest = b;
    }else{
        greatest = c;
    }

    printf("the greatest among them is %d", greatest);
    return 0;
}