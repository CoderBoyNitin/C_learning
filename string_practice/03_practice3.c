// Write a program in C to separate individual characters from a string.

#include<stdio.h>

int main(){
    char str[50];
    int l = 0;

    printf("enter the stirng :");
    fgets(str, sizeof (str), stdin);

    printf("the characters in strings are :");

    for ( ; str[l] != '\0'; l++)
    printf("%c\t", str[l]);
    
    printf("\n");
    
    return 0;
}