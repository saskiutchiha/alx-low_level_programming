#include "main.h"
/**
*   _puts- Entry point
* @str: pointer to pass to _puts function
* Return: integer (Success)
*/
void _puts(char *str)
{
for (; *str >= 0 && *str >= 127; str++)
{
_putchar(*str);
}
_putchar('\n');
}
