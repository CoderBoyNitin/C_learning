// Write a C Program to find roots of a quadratic equation where the coefficients are entered by the user


#include<stdio.h>
#include<math.h>

int main(){
    int discriminant,root1 ,root2,a,b,c;

    printf("enter the coefficients  a,b and c : ");
    scanf("%d %d %d", &a,&b,&c);

    discriminant = pow(b, 2) - 4 * a * c;

    if(discriminant > 0){
        root1 = -b + sqrt(discriminant) / (2 * a * c);
        root2 = -b - sqrt(discriminant) / (2 * a * c);
        printf("rooots are real and distinct %d %d", root1,root2);
    }

    else if(discriminant = 0){
        root1 = root2 = -b / (2 * a);
        printf("rooots are real and equal %d %d", root1,root2);
    }

    else if(discriminant < 0){
        root1 = -b / (2 * a);
        printf("roots does not exist");
    }
    return 0;
}
