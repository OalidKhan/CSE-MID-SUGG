#include<stdio.h>
int main()
{
    int N,n,remainder,sum = 0;
    printf("Enter any number: ");
    scanf("%d",&N);
    n = N;
    while (n!=0)
    {
        remainder = n % 10;
        sum = (sum*10) + remainder;
        n = n / 10;
    }
    if (N==sum)
    {
        printf("%d is a Palindrome Number",N);
    }
    else
    {
        printf("%d is not a Palindrome Number",N);
    }

    return 0;
}

