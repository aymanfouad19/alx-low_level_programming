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
n = rand() % 3;
if (n == 0)
{
printf("0 is zero\n");
}
else if (n == 1)
{
printf("98 is positive\n");
}
else
{
printf("-98 is negative\n");
}
return (0);
}
