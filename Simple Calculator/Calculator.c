#include<stdio.h>
float summation(float x,float y)
{
    return x+y;
}
float substract(float x,float y)
{
    return x-y;
}
float multiplication(float x,float y)
{
    return x*y;
}
float division(float x,float y)
{
    return x/y;
}
int main()
{
    float a,b,result;
    char c;
    printf("Enter your first number: ");
    scanf("%f",&a);
    printf("Enter your second number: ");
    scanf("%f",&b);
    printf("Enter your operator(+,-,*,/): ");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
    {
        result = summation(a,b);
        printf("%.2f",result);
        break;
    }
    case '-':
    {
        result = substract(a,b);
        printf("%.2f",result);
        break;
    }
    case '*':
    {
        result = multiplication(a,b);
        printf("%.2f",result);
        break;
    }
    case '/':
    {
        result = division(a,b);
        printf("%.2f",result);
        break;
    }
    }

    return 0;
}
