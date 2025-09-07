#include<stdio.h>
int main()
{
    int N,fact = 1;
    printf("Enter any positive number: ");
    scanf("%d",&N);
    for (int i=1 ; i<=N ; i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d",fact);

    return 0;
}
