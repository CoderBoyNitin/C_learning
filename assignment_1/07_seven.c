// Write a C program to find the sum of individual digits of a positive integer. The number has to be taken
// as input from the keyboard. The total number of digits in the number may be four


#include<stdio.h>

int main(){
    int number,digit,sum = 0;

    printf("enter number :");
    scanf("%d", &number);

    while (number > 0) {
        digit = number% 10; //yha pe last digit select kiye
        sum += digit; //digit ko 0 se sum krwaye
        number /= 10; //remove the last digit
    }
 
    printf("the sum of the digit is %d", sum );
    return 0;
}