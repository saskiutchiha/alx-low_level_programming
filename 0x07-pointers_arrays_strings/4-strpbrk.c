#include <stddef.h>
char *_strpbrk(char *s, char *accept)
{
char *d;
d = accept;
for (;*s < 127 && *s >0;s++)
{
for (;*accept < 127 && *accept > 0;accept++)
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
