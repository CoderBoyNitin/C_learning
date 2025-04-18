// Write a program in C to find the transpose of a given matrix.

#include<stdio.h>

int main(){
    int i, j, arr1[50][50],arr2[50][50],r ,c ,n;


    printf("input the rows and columns of a matrix  :");
    scanf("%d %d", &r,&c );
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("elements - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < r; i++) {
        printf("\n");
        for (j = 0; j < c; j++)
            printf("%d\t", arr1[i][j]);
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            // Assigning transposed values to the new matrix
            arr2[j][i] = arr1[i][j];
        }
    } 

    printf("\n\nThe transpose of a matrix is : ");
    for (i = 0; i < c; i++) {
        printf("\n");
        for (j = 0; j < r; j++) {
            printf("%d\t", arr2[i][j]);
        }
    }
    printf("\n\n");

    return 0;
}