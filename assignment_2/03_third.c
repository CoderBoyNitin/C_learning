// Write a program in C that takes two integer numbers (say x and y) and prints the value x^y. Do not use
// the standard library function pow() for the computation of x^y

#include<stdio.h>

int main(){
    int x, y, result = 1;
    printf("enter x and y :");
    scanf("%d %d", &x, &y);

    for (int i = 1; i <=y; i++)
    {
       result= result * x;
    }
    
    printf("%d ^ %d = %d", x, y, result);

    return 0;
}