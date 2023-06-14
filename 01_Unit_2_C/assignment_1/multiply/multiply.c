#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f\r%f", &a, &b);
    printf("Product: %f", a * b);
    getchar();
    getchar();
    return 0;
}