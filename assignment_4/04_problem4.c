// Write a c program to check whether a input string is palindrome or not

#include<stdio.h>
#include<string.h>

int main(){
   char str[50];
   int len, palindrome = 1;

   printf("enter the string :");
   fgets(str, sizeof str, stdin);

   len = strlen(str);

   if (str[len - 1] == '\n') {
    str[len - 1] = '\0';
    len--;
}

    for ( int i = 0; i < len/2; i++)
    {
        if (str[i] != str[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome){
        printf("the string is palindrome");
    }
    else {
        printf("the string is not palindrome");
    }
    
   return 0;
}