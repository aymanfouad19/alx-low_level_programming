#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
while (*s)
{
if (*s == '-')
sign = -sign;
if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');
if (num > 0 && !(*s >= '0' && *s <= '9'))
break;
s++;
}
return (num * sign);
}
