#include<stdio.h>
int Addition(int x,int y)
{
    return x+y;
}
int Substraction(int x,int y)
{
    return x-y;
}
int Multiplication(int x,int y)
{
    return x*y;
}
float Division(float x,float y)
{
    return x/y;
}
int Modulas(int x,int y)
{
    return x%y;
}
int main()
{
    int a,b;
    char c;
    printf("Enter two integer: ");
    scanf("%d %d",&a,&b);
    printf("Enter your operator(+,-,*,/,%%): ");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
        {
            printf("Summation = %d",Addition(a,b));
            break;
        }
    case '-':
        {
            printf("Substraction = %d",Substraction(a,b));
            break;
        }
    case '*':
        {
            printf("Multiplication = %d",Multiplication(a,b));
            break;
        }
    case '/':
        {
            if (b==0)
            {
                printf("Math Invalid");
            }
            else
            {
            printf("Division = %.2f",Division(a,b));
            }
            break;
        }
    case '%':
        {
            printf("Modulas = %d",Modulas(a,b));
            break;
        }
    }

    return 0;
}
