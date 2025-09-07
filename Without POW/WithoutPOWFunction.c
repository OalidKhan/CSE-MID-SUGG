#include<stdio.h>
int main()
{
    int N,n,result=1;
    printf("Enter any number: ");
    scanf("%d",&N);
    printf("Enter power: ");
    scanf("%d",&n);
    for (int i=1 ; i<=n ;i++)
    {
        result = result * N;
    }
    printf("RESULT = %d",result);


    return 0;
}
