#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program generates a random integer and prints whether it is positive, negative or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;
    srand(time(NULL));
    n = rand() % 201 - 100;
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }
    return (0);
}
