#include<stdio.h>
int main()
{
    int N,sum = 0;
    printf("Enter the last number: ");
    scanf("%d",&N);
    for (int i=1 ; i<=N ; i++)
    {
        if (i%2==0 || i%5==0)
        {
            printf("%d ",i);
            sum = sum + i;
        }
    }
    printf("\nThe sum of Natural Number divided by 2 & 5 = %d",sum);

    return 0;
}
