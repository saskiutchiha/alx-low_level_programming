#include "main.h"
/**
*  print_diagonal- Entry point
* @n: Number to pass to print_diagonal function
* Return: void (Success)
*/
void print_diagonal(int n)
{
int i, j;
for (j = 0; j < n; j++)
{
for (i = 0; i < j; i++)
{
_putchar(' ');
}
_putchar('\\')
_putchar('\n')
}
}
