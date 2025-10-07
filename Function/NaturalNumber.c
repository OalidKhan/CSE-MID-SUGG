#include<stdio.h>
int NaturalNumber(int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    NaturalNumber(N);

    return 0;
}
