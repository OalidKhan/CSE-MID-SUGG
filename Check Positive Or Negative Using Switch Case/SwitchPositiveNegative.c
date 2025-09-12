#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    switch(N>0)
    {
    case 1:
        {
            printf("Positive");
            break;
        }
    case 0:
        {
            switch(N<0)
            {
            case 1:
                {
                    printf("Negative");
                    break;
                }
            case 0:
                {
                    printf("Zero");
                    break;
                }
            }
            break;
        }
    }

    return 0;
}
