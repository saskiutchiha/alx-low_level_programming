#include "main.h"
void print_rev(char *s)
{
for (;*s > 0 && *s < 127 ;s++)
{
}
s--;
for (;*s > 0 && *s < 127 ;--)
{
_putchar(*s);
}
}
