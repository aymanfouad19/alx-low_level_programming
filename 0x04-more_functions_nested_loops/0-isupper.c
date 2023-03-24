#include <stdio.h>

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}

int main(void)
{
    char c = 'A';

    if (_isupper(c))
        printf("%c is uppercase\n", c);
    else
        printf("%c is not uppercase\n", c);

    return 0;
}
