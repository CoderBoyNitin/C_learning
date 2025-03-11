// Write a program that takes as input a single character from the user; If the character is an English alphabet
// in small case, it is converted to upper case and printed out. If the character is an English alphabet in
// upper case, it is converted to lower case and printed out, and If the character is not an English alphabet,
// then it is kept unchanged and printed out

#include <stdio.h>

int main()
{
    char ch;

    printf("enter charcter :");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {

        printf("Converted character: %c\n", ch - 32);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {

        printf("Converted character: %c\n", ch + 32);
    }
    else
    {

        printf("Character remains unchanged: %c\n", ch);
    }

    return 0;
}