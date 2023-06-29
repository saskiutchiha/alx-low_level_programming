#include <string.h>
#include "main.h"
/**
*   puts_half- Entry point
* @str: pointer to pass to puts_half function
* Return: integer (Success)
*/
void puts_half(char *str)
{
int i;
if (strlen(str) % 2 == 1)
{
i = (strlen(str) + 1) / 2;
}
else
{
i = strlen(str) / 2;
}
str = str + i;
for (; *str > 0 && *str < 127; str++)
{
_putchar(*str);
}
_putchar('\n');
}
