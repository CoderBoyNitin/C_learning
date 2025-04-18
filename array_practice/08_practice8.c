// Write a program in C for adding two matrices of the same size.

#include<stdio.h>

int main(){
    int i, j, arr1[50][50], arr2[50][50], arr3[50][50], sum = 0, n;

    printf("input the size of a matrix : ");
    scanf("%d", &n);

    printf("input the elements for first matrix :");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("elements - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
        
    }
    
    printf("input the elements for second matrix :");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("elements - [%d],[%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
        
    }

    printf("the first matrix is :");
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        
    }

    printf("\nthe second matrix is :");
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        
    }

     for ( i = 0; i < n; i++)
     {
        for ( j = 0; j < n; j++)
        {
           arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
        
     }

     printf("\nthe sum of two matrix is :");
     for ( i = 0; i < n; i++)
     {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        
     }

     printf("\n");
     
   return 0;
}