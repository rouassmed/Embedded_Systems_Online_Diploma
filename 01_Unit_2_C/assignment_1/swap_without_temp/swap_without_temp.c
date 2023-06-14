#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    printf("Before swapping: a = %f and b = %f\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %f and b = %f", a, b);
    getchar();
    getchar();
    return 0;
}