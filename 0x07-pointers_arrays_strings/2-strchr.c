#include <stddef.h>
char *_strchr(char *s, char c)
{
for (*s < 128 && *s > 0;s++)
{
if (*s == c)
{
return (s);
}
}
return (NULL);
}
