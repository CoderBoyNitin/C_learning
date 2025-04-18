// Write a program in C for a 2D array of size 3x3 and print the matrix.

#include<stdio.h>

int main(){
    int i, j, arr1[3][3];

    printf("input the elements :");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("elements - [%d],[%d] : " , i,j);
            scanf("%d", &arr1[i][j]);
        }
   
    }
    
    printf("the matrix is\n :");
    for ( i = 0; i < 3; i++)
    {
       printf("\n");
       for ( j = 0; j < 3; j++)
       {
            printf("%d\t", arr1[i][j]);
       }
       
    }
    
    return 0;
}