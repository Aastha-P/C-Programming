#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Enter num1 : ");
    scanf("%f", &num1);

    printf("Enter num2 : ");
    scanf("%f", &num2);

    float sum = num1 + num2;
    printf("Addition of two numbers : %f", sum);

    return 0;
}