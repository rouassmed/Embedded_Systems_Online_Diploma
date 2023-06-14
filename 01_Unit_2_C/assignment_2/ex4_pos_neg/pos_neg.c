#include <stdio.h>

int main()
{
    float a;
    printf("Enter a number :");
    scanf("%f",&a);
    if (a > 0)
    {
        printf("%f is positive", a);
    }
    else if (a == 0)
    {
        printf("You entered zero");
    }
    else printf("%f is negative", a);
    getchar();
    getchar();
    return 0;
}