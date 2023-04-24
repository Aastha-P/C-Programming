#include <stdio.h>

int main()
{
    float r;
    float pi = 3.14;

    printf("Enter radius of a circle : ");
    scanf("%f", &r);

    printf("Area of circle is : %f", pi * r * r);
    return 0;
}