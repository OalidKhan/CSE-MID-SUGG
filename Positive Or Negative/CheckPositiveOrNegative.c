#include<stdio.h>
int main()
{
    int N;
    printf("Enter any number: ");
    scanf("%d",&N);
    if (N<0)
    {
        printf("%d is a negative number",N);
    }
    else if (N>0)
    {
        printf("%d is a positive number",N);
    }
    else
    {
        printf("The number is zero");
    }

    return 0;
}
