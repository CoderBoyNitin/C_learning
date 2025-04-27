// // Write a program in C to count the total number of words in a string.

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main(){
//     char str[50];
//     int i, l = 0;

//     printf("enter the string :");
//     fgets(str, sizeof (str), stdin);

//    l = strlen(str);

   
//     return 0;
// }

#include<stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your name and age is: %s%d\n", name, age);

    return 0;
}
