#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program generates a random integer between -99 and 99 and prints whether it is positive,
 * negative or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;
    srand(time(NULL));
    n = rand() % 199 - 99;
    printf("%02d ", n);
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }
    return (0);
}
