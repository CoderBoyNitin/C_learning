// 3. Write a C program for temperature conversion. Use the following formula for conversion.
// f = (9/5) * c + 32
// (a) Convert the equivalent temperature in Fahrenheit (F) to Celsius (C). Where F have to be taken
// from the keyboard.

#include<stdio.h>

int main(){
    int c = 27;
    float f;
    printf("temp in fah is %f", ((9.0/5.0)*c )+32);
    return 0;
}