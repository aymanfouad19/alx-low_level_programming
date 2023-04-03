#include <stddef.h>
#include "main.h"
/**
* _strchr - locates a character in a string
* @s: pointer to the string to search in
* @c: character to locate
*
* Return: pointer to the first occurrence of c in s, or NULL if not found
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}