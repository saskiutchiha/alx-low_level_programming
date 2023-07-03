#include <stddef.h>
/**
*  _strpbrk- Entry point
* @accept: pointer to pass to _strpbrk function
* @s: pointer to pass to _strpbrk function
* Return: char (Success)
*/
char *_strpbrk(char *s, char *accept)
{
char *d;
d = accept;
for (; *s < 127 && *s > 0; s++)
{
for (; *accept < 127 && *accept > 0; accept++)
{
if (*s == *accept)
{
return (s);
}
}
accept = d;
}
return (NULL);
}
