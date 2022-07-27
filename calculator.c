#include <stdio.h>

float add(float a, float b)
    {
        return a + b;
    }

float subtract(float a, float b)
    {
        return a - b;
    }

float multiply(float a, float b)
    {
        return a * b;
    }

float divide(float a, float b)
    {
        return a / b;
    }

int main()
{
    printf("Choose an operation (+,-,*,/) : ");
    char operation;
    scanf("%c", &operation);
     switch (operation)
    {
    case '+':
        printf("Enter two numbers to add :\n");
        float num1, num2;
        scanf("%f %f", &num1, &num2);
        printf("The sum of %f and %f is : %f\n", num1, num2, add(num1, num2));
        break;
    case '-':
        printf("Enter two numbers to subtract :\n");
        float num3, num4;
        scanf("%f %f", &num3, &num4);
        printf("The difference of %f and %f is : %f\n", num3, num4, subtract(num3, num4));
        break;
    case '*':
        printf("Enter two numbers to multiply :\n");
        float num5, num6;
        scanf("%f %f", &num5, &num6);
        printf("The product of %f and %f is : %f\n", num5, num6, multiply(num5, num6));
        break;
    case '/':
        printf("Enter two numbers to divide :\n");
        float num7, num8;
        scanf("%f %f", &num7, &num8);
        printf("The division of %f and %f is : %f\n", num7, num8, divide(num7, num8));
        break;
    return 0;
}
