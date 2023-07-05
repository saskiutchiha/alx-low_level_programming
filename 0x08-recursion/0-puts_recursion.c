#include <stdio.h>
/**
*    _puts_recursion Entry point
* @s: Number to pass to  _puts_recursion function
* Return: void (Success)
*/
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
