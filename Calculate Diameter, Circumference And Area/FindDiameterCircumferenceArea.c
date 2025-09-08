#include<stdio.h>
int main()
{
    float r,diameter,circumference,area;
    float const pi = 3.1416;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    diameter = r * 2;
    circumference = 2 * pi * r;
    area = 2 * pi * r * r;
    printf("Diameter = %.4f\nCircumference = %.4f\nArea = %.4f",diameter,circumference,area);

    return 0;
}
