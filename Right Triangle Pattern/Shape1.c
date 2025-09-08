#include<stdio.h>
int main()
{
    int N;
    printf("Enter how many line you want: ");
    scanf("%d",&N);
    for (int r=1 ; r<=N ; r++)
    {
        for (int c=1 ; c<=r ; c++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
