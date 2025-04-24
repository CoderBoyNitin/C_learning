// Write a C program that can store n elements in an one dimensional array and find the minimum and
// maximum elements from the set of data item

#include<stdio.h>

int main(){
    int max, min, i, n, arr[50];

    printf("enter the number of inputs :");
    scanf("%d", &n);

    printf("enter the arrays input :\n");
    for ( i = 0; i < n; i++)
    {
        printf("elements - %d :" ,i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

  for ( i = 0; i < n; i++)
  {
    
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    
  }
  
    printf("the maximum arrays from the given arrays is : %d \n", max);
    printf("the minimum arrays from the given arrays is : %d \n", min);

    printf("\n");

    return 0;
}