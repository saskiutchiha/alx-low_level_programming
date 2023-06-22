#include "main.h"
/**
* more_numbers- Entry point
* Return: void (Success)
*/
void more_numbers(void)
{
int i, a, b, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
a = j / 10;
b = j % 10;
if (j > 9)
{
_putchar(a + 48);
}
_putchar(b + 48);
}
_putchar('\n');
}
}
