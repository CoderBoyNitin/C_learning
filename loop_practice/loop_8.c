#include<stdio.h>

int main(){
    int i,j,n;

    printf("input the table number starting from 1 :");
    scanf("%d", &n);
    printf("multiplication table from 1 to n is %d\n", n);

    for ( i = 1; i <= 10 ; i++)
    {
       for ( j = 1; j <= n; j++)
       {
        printf("%d X %d = %d", i, j, i * j);
       }
       printf("\n");
    }
    
    return 0;
}