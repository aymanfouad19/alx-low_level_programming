#include "main.h"
/**
* _strcmp - compares two strings
*
* @s1: the first string to compare
* @s2: the second string to compare
*
* Return: 0 if s1 and s2 are equal,
* negative if s1 is less than s2,
* and positive if s1 is greater than s2
*/
int _strcmp(const char *s1, const char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
return (0);
}
