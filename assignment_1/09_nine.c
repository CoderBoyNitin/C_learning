// . Write C Program to check whether a given year entered from the keyboard is a leap year or not.


#include<stdio.h>

int main(){
    int year;

    printf("enter year :");
    scanf("%d", & year);

    if(year % 4 == 0){
        printf("this year is a leap year");
    }else{
        printf("this year is not a leap year");
    }

    return 0;
}