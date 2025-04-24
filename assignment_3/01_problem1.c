// 1. Write a C program for the following: Store a list of integers in an one dimensional array and print the
// following:
// a. The maximum value of the array
// b. the minimum value of the array
// c. the average value
// d. find the sum of odd numbers from the array.
// e. print the array contents in reverse.


#include<stdio.h>

int main(){
    int max, min, i, n, arr[50], oddsum = 0, sum = 0;
    float avg;

    printf("enter the  number of inputs : ");
    scanf("%d", &n);

    printf("enter the inputs :");
    for ( i = 0; i < n; i++)
    {
        printf("elements -%d :", i);
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
        if (arr[i] % 2 != 0 ){
            oddsum += arr[i];
        }
    }

    avg = (float) sum / n;


    
    printf("The maximum of the following is %d\n", max);
    printf("The minimum of the following is %d\n", min);
    printf("The sum of odd numbers are following is %d\n", oddsum);
    printf("The average of the following is %f\n", avg);

    printf("the numbers in reverse order is :");
    for ( i = n-1; i >= 0; i--)
    {
       printf("%d\t", arr[i]);
    }
    
    printf("\n");

    return 0;
}