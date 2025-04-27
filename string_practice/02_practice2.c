// Write a program in C to find the length of a string without using library functions.

#include <stdio.h>

int main()
{
    char str[30];
    int l = 0;

    printf("enter the string :");

    fgets(str, sizeof str, stdin);

    for ( ; str[l] != 0; l++);
  
    printf("the length of the string is %d", l - 1);

    return 0;
}