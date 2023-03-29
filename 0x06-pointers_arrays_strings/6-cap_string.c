#include "main.h"
/**
* cap_string - capitalizes all words of a string
*
* @str: the string to capitalize
*
* Return: the capitalized string
*/
char *cap_string(char *str)
{
int i;
i = 0;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
while (str[i] != '\0')
{
switch (str[i])
{
case ' ':
case '\t':
case '\n':
case ',': case ';': case '.': case '!':
case '?': case '"': case '(': case ')':
case '{': case '}':
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
break;
default:
break;
}
i++;
}
return (str);
}
