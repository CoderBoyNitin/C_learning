// Write a program in C to print individual characters of a string in reverse order.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[50];
    int i, l = 0;

    printf("enter the string :");
    fgets(str, sizeof (str), stdin);

    l =strlen(str);

    printf("the characters in reverse order is :");

    for (int i = l - 1; i >= 0; i--){
        printf("%c      ", str[i]);
    }
   
    printf("\n");
    return 0;
}