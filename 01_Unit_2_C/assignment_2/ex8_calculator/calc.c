#include <stdio.h>

int main()
{
    char s;
    float R, o1, o2;
    printf("Enter operator either + or - * or divide:");
    scanf("%c", &s);
    printf("Enter two operands: ");
    scanf("%f", &o1);
    scanf("%f", &o2);
    if (s == '+')
    {
        R = o1 + o2;
        printf("%f", R);
    }
    else if (s == '-')
    {
        R = o1 - o2;
        printf("%f", R);
    }
    else if (s == '*')
    {
        R = o1 * o2;
        printf("%f", R);
    }
    else if (s == '/')
    {
        R = o1 / o2;
        printf("%f", R);
    }
    else
    {
        printf("Invalid operator!");
    }
    getchar();
    getchar();
    return 0;
}