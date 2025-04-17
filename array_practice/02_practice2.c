// Write a program in C to read n number of values in an array and display them in reverse order.
#include<stdio.h>

int main(){
    int i, n ,arr[5];

    printf("enter the input arrays :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("elements %d :", i);
        scanf("%d", &arr[i]);
    }
    printf("the reversed arrays are :");
    
    for (int i = n-1; i >= 0 ; i--)
    {
       printf("%d", arr[i]);
    }
    
    
    return 0;
}