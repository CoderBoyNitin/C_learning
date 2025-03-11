// Write a C program to compute the area and circumference of a circle for a given radius, r. Here radius,
// r have to be taken form the user

#include <stdio.h>

int main()
{
    float r;
    printf("enter radius :");
    scanf("%f", &r);
    printf("area and circumference is %f %f\n", 3.14 * r * r, 2 * 3.14 * r);
    return 0;
}