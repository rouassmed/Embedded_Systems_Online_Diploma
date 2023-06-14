#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long a;
    printf("Enter an integer :");
    scanf("%d", &n);
    a = 1;
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            a = a * i;
        }
        printf("Factorial = %llu", a);
    }
    else
        printf("Error!!! Factorial of negative number doesn't exist.");
    getchar();
    getchar();
    return 0;
}