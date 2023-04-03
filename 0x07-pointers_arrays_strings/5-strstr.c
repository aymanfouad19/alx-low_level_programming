#include <stddef.h>
#include "main.h"
/**
* _strstr - locates a substring
* @haystack: string to search in
* @needle: substring to search for
*
* Return: pointer to beginning of located substring or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
do {
h = haystack;
n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
	} while (*haystack != '\0');
return (NULL);
}
