// Write a C program that can sort n numbers stored in an one dimensional array. Here n and list of numbers
// are user input.

#include<stdio.h>

int main(){
    int i, j, n, arr[50], temp = 0;

    printf("enter the number of inputs :");
    scanf("%d", &n);

    printf("input the arrays :\n");
    for ( i = 0; i < n; i++)
    {
        printf("elements - %d :" , i);
        scanf("%d", &arr[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
          if (arr[j] < arr[i]){

              temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
          }
        }
    }

    printf("the sorted arrays in ascending order is  :");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    printf("\n");

    return 0;
}
