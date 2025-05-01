// Write a C program that can compare two input strings are similar or not without using strcmp().

#include<stdio.h>
#include<string.h>

int main(){

    char str1[50], str2[50];
    char flag = 0;

    printf("enter your first string :");
    fgets(str1, sizeof str1, stdin);

    printf("enter your second string :");
    fgets(str2, sizeof str2, stdin);

    if(str1[strlen(str1 - 1) == '\n']);
    (str1[strlen(str1 - 1) == '\0']);

    if(str2[strlen(str2 - 1) == '\n']);
    (str2[strlen(str2 - 1) == '\0']);

    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0){
        printf("string are equal");
    }
else{
    printf("string are not equal");
}

    return 0;
}