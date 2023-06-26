#include "main.h"
void print_rev(char *s)
{
char *str = s;
for (;str > 0 && str < 127 ;str++)
{
}
str--;
for (;str > 0 && str < 127 ;str--)
{
_putchar(*str);
}
}
