// Write a program in C to copy the elements of one array into another array.
#include<stdio.h>

int main(){
    int i, n ,arr1[3],arr2[3];

    printf("enter the inputs :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("elements %d :", i);
        scanf("%d", &arr2[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
       arr1[i] = arr2[i];
    }

    printf("the elements stored in first array is :");
    for ( i = 0; i < n; i++)
    {
        printf("% 5d", arr1[i]);
    }

    printf("\nthe copied elements stored in second array is :");
    for ( i = 0; i < n; i++)
    {
        printf("% 5d", arr2[i]);
    }


    printf("\n");
    
    return 0;
}