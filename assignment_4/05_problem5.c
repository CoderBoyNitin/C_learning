// Write a C program that can capitalize all the letters of a string

#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[50];
    int ctr = 0;
    char  str_char;

    printf("enter the lowercase string :");
    fgets(str, sizeof str, stdin);

    printf("here is your uppercase string :");

    for (ctr = 0; str[ctr]; ctr++) {
        str_char = str[ctr]; // 
        putchar(toupper(str_char));
    }
    

    return 0;
}