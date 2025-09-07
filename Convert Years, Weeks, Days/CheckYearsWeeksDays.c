#include<stdio.h>
int main()
{
    int N,years,weeks,days;
    printf("Enter your value in days: ");
    scanf("%d",&N);
    years = N / 365;
    weeks = (N % 365) / 7;
    days = (N % 365) % 7;
    printf("%d Years\n%d Weeks\n%d Days",years,weeks,days);

    return 0;
}
