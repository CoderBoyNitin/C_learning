// 4. Write C programs to evaluate the following expressions:
// (a) 4x2 + 2x + 10

#include<stdio.h>

int main(){
    int x;
    // int a = 4, b = 2, c = 10;
    int result;

    printf("enter x : ");
    scanf("%d", &x);

    result = 4 *( x * x) + 2 * x + 10; 
    
    printf("result is %d",  4 *( x * x) + 2 * x + 10);
    return 0;
}