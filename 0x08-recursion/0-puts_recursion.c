#include <stdio.h>
void _puts_recursion(char *s)
{
if (*s > 0 && *s < 127)
{
putchar(*s);
 _puts_recursion(s+1);
}
else
{
putchar('\n');
}
}
