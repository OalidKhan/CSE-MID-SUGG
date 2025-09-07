#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    if (year%400==0)
    {
        printf("%d is a Leap Year");
    }
    else if (year%100!=0 && year%4==0)
    {
        printf("%d is a Leap Year");
    }
    else
    {
        printf("%d is not a Leap Year");
    }

    return 0;
}
