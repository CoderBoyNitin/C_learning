// Write a program in C to input a string and print it.

#include <stdio.h>

int main()
{
    char str[30];

    printf("enter the string :");

    fgets(str, sizeof str, stdin);

    printf("the string is %s", str);

    return 0;
}
