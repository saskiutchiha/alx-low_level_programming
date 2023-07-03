#include <stddef.h>
char *_strpbrk(char *s, char *accept)
{
char *d;
d = accept;
while (*s < 128 && *s >= 0)
{
while (*accept < 128 && *accept >= 0)
{
if (*s == *accept)
{
return (s);
}
accept++;
}
accept = t;
s++;
}
return (NULL);
}
