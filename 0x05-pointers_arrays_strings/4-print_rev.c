#include "main.h"
/**
*   print_rev- Entry point
* @s: pointer to pass to print_rev function
* Return: void (Success)
*/
void print_rev(char *s)
{
for (;*s > 0 && *s < 127 ;s++)
{
}
s--;
for (;*s > 0 && *s < 127 ;s--)
{
_putchar(*s);
}
_putchar('\n');
}
