// Write a program in C to store elements in an array and print them
#include<stdio.h>

int main(){
    int arr[10];
    int i;

    for (int i = 0; i < 9; i++)
    {
       scanf("%d", &arr[i]);
    }
    printf("array elemnets :");
    
   for (int i = 0; i < 9; i++)
   {
    printf("%d", arr[i]);
   }
   
    return 0;
}