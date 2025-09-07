#include<stdio.h>
#include<math.h>
int main()
{
    int N,n,result;
    printf("Enter any number: ");
    scanf("%d",&N);
    printf("Enter power: ");
    scanf("%d",&n);
    result = pow(N,n);
    printf("RESULT = %d",result);

    return 0;
}
