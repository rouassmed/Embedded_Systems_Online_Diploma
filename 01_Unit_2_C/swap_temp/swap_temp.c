#include <stdio.h>

int main()
{
    float a, b, temp;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %f", a);
    printf("\nAfter swapping, value of b = %f", b);
    getchar();
    getchar();
    return 0;
}