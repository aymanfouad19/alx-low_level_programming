char *rot13(char *s)
{
char *start = s;
  char *rot13 = s;
while (*s != '\0')
{
if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
{
*rot13 = *s + 13;
}
else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
{
*rot13 = *s - 13;
}
else
{
*rot13 = *s;
}
rot13++;
s++;
}
*rot13 = '\0';
return start;
}
