#include <stddef.h>
/**
*  _strchr- Entry point
* @s: pointer to pass to _strchr function
* @c: pointer to pass to _strchr function
* Return: char (Success)
*/
char *_strchr(char *s, char c)
{
for (;*s < 127 && *s > 0;s++)
{
if (*s == c)
{
return (s);
}
}
return (NULL);
}
