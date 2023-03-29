#include "main.h"
/**
* leet - encodes a string into 1337
* @s: input string
*
* Return: pointer to encoded string
*/
char *leet(char *s)
{
char *leet_str = "aAeEoOtTlL";
char *leet_code = "4433007711";
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; leet_str[j]; j++)
{
if (s[i] == leet_str[j])
s[i] = leet_code[j];
}
}
return s;
}
