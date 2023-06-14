#include <stdio.h>

int main()
{
    int a;
    printf("Enter an integer you want to check: ");
    scanf("%d", &a);
    if (a % 2 != 0)
    {
        printf("%d is odd", a);
    }
    else
    {
        printf("%d is even", a);
    }
    getchar();
    getchar();
    return 0;
}