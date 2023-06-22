#include "main.h"
/**
* more_numbers- Entry point
* Return: void (Success)
*/
void more_numbers(void)
{
i, a, b, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
a = i / 10;
b = i % 10;
if (i > 9)
{
_putchar(a + 48);
}
_putchar(b + 48);
}
_putchar('\n');
}
}
