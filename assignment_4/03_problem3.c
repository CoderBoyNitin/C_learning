// Write a C program that takes a string as input and then prints the number of occurrence(s) of each vowel
 // of the English alphabets in the string.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[50];
    int i, vowel = 0, length;

    printf("enter the string :");
    fgets(str ,sizeof str, stdin);

    length = strlen(str);


    for ( i = 0; i < length; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A'|| str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){

            vowel++;
        }
    }
    
    printf("the number of vowels in string are %d", vowel);

    return 0;
}
// // for both vowel and consonant 

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main(){
//     char str[50];
//     int i, vowel = 0, length, consonant = 0;

//     printf("enter the string :");
//     fgets(str ,sizeof str, stdin);

//     length = strlen(str);


//     for ( i = 0; i < length; i++)
//     {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A'|| str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
//             vowel++;
//         }

//         if((str[i] >= 'a' && str[i] <= 'z') || str[i] >= 'A' && str[i] <= 'Z'){
//             consonant++;
//         }
//     }
    
//     printf("the number of vowels in string are %d\n", vowel);
//     printf("the number of consonants in the string are %d", consonant);

//     return 0;
// }