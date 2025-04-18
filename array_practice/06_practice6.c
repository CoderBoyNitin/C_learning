// Write a program in C to find the maximum and minimum elements in an array.
#include<stdio.h>

int main(){
    int i, n, max, min;
    int arr[10];

    printf("enter the number of inputs :");
    scanf("%d", &n);

    printf("enter the inputs :");

    for (int i = 0; i < n; i++)
    {
        printf("elements - %d :", i);
        scanf("%d", &arr[i]);

    }

    max = arr[0];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("the maximum elements is %d\n", max);
    printf("the minimum elements is %d\n", min);
    
    
    return 0;
}

