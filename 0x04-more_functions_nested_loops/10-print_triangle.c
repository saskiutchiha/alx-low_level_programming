#include "main.h"
/**
*  print_triangle- Entry point
* @size: Number to pass to print_triangle function
* Return: void (Success)
*/
void print_triangle(int size)
{
int i, j, k;
for (j = 0; j < size; j++)
{
for (i = 0; i < size-i-1; i++)
{
_putchar(' ');
}
for (k = 0; k < j + 1; k++)
{
_putchar('#');
}
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
