#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two values: \n");
    scanf("%f %f",&a,&b);
    printf("%.2f + %.2f = %.2f\n",a,b,a+b);
    printf("%.2f - %.2f = %.2f\n",a,b,a-b);
    printf("%.2f * %.2f = %.2f\n",a,b,a*b);
    printf("%.2f / %.2f = %.2f\n",a,b,a/b);
    int x,y;
    x = a;
    y = b;
    printf("%d %% %d = %d\n",x,y,x%y);
    a++;
    b--;
    printf("After incriment, a = %.2f\n",a);
    printf("After decriment, b = %.2f\n",b);

    return 0;
}
