// . Write a C program for temperature conversion. Use the following formula for conversion.
// c
// 5 = f−32
// 9

// (b) Convert the equivalent temperature in Celsius (C) to Fahrenheit (F). Where C have to be taken
// from the keyboard.

#include <stdio.h>

int main()
{
    float c;
    float f;
    printf("enter faht:");
    scanf("%f", &f);

    printf("value in cel is %f", (5.0 * f - 32) / 9.0);
    return 0;
}