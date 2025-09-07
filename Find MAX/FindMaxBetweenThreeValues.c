#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integer values: \n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && b>=c || a>=c && c>=b)
    {
        printf("%d is MAX",a);
    }
    else if (b>=c && c>=a || b>=a && a>=c)
    {
        printf("%d is MAX",b);
    }
    else if (c>=a && a>=b || c>=b && b>=a)
    {
        printf("%d is MAX",c);
    }


    return 0;
}
