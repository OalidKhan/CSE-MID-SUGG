#include<stdio.h>
int main()
{
    int N;
    printf("Enter any positive number: ");
    scanf("%d",&N);
    if (N%2==0)
    {
        printf("%d is a Even Number",N);
    }
    else
    {
        printf("%d is a Odd Number",N);
    }

    return 0;
}
