#include<stdio.h>
int main()
{
    int N,n,remainder,sum = 0;
    printf("Enter any number: ");
    scanf("%d",&N);
    n = N;
    for (int i=1 ; i<=N ; i++)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    printf("The sum of digits = %d",sum);

    return 0;
}
