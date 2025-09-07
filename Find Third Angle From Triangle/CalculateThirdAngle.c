#include<stdio.h>
int main()
{
    float A,B,C;
    printf("Enter first angle: ");
    scanf("%f",&A);
    printf("Enter second angle: ");
    scanf("%f",&B);
    C = 180 - (A + B);
    printf("The third angle = %.2f",C);

    return 0;
}

