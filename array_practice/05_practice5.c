// Write a program in C to count the total number of duplicate elements in an array.
#include<stdio.h>

int main(){
    int i, n ,arr[100], sum = 0;
    int j,ctr = 0;

    printf("enter the inputs :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("elements %d :", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++;  
                break;  
            }
        }
    }

    printf("the duplicate numbers are %d", ctr);

    return 0;
}