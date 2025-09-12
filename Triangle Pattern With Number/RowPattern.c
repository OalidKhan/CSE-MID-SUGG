#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int r=1 ; r<=N ; r++)
    {
        for (int c=1 ; c<=r ; c++)
        {
            printf("%d ",r);
        }
        printf("\n");
    }

    return 0;
}
