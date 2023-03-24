#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}

int main(void)
{
    int c;

    printf("Enter a character: ");
    c = getchar();

    if (_isupper(c))
        printf("The character %c is uppercase.\n", c);
    else
        printf("The character %c is not uppercase.\n", c);

    return 0;
}
