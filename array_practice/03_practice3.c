// Write a program in C to find the sum of all elements of the array.
#include<stdio.h>

int main(){
    int i, n ,arr[3], sum = 0;

    printf("enter the inputs :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("elements %d :", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }

    printf("the sum of arrays elements are %d", sum);
    
    return 0;
}