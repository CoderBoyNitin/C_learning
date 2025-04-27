// Write a program in C to count the total number of words in a string.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[50];
    int i = 0, words = 0;

    printf("enter the string :");
    fgets(str, sizeof (str), stdin);

  for (; str[i] != '\0' ; i++)
  {
    if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {

        words++;
    }
}
i++;
 
    printf("the total number of string is %d", words );
    return 0;
}

