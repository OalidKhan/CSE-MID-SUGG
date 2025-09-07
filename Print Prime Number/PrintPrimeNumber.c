#include<stdio.h>
int main()
{
    int N,n,count,i;
    printf("Enter the ending number: ");
    scanf("%d",&N);
    for (n=1 ; n<=N ; n++)
    {
        count = 0;
        if (n==1)
        {
            count++;
        }
        else
        {
            for (i=2 ; i<n ; i++)
            {
                if (n%i==0)
                {
                    count++;
                    break;
                }
            }
            if (count==0)
            {
                printf("%d ",n);
            }
        }
    }

    return 0;
}
