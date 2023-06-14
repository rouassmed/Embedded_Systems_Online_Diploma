#include <stdio.h>

int main()
{
    int v[3];
    int a, i;
    printf("Enter three numbers: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &v[i]);
    }
    a = v[0];
    for (i = 1; i < 3; i++)
    {
        if (v[i] < a)
        {
            a = v[i];
        }
    }
    printf("Largest number = %d", a);
    getchar();
    getchar();
    return 0;
}