#include<stdio.h>
int main()
{
    int N;
    printf("Enter any positive number: ");
    scanf("%d",&N);
    if (N%5==0 && N%11==0)
    {
        printf("%d is Divisible by 5 and 11",N);
    }
    else
    {
        printf("%d is not Divisible by 5 and 11",N);
    }

    return 0;
}
