#include <stdio.h>

int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    switch (c) {
        case 'a':
        case 'i':
        case 'o':
        case 'e':
        case 'A':
        case 'I':
        case 'O':
        case 'E':
        printf("%c is a vowel", c);
            break;
        default:
        printf("%c is a consonant", c);
            break;
}
    getchar();
    getchar();
    return 0;
}