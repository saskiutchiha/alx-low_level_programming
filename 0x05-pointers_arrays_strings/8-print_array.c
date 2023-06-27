#include "main.h"
/**
*   print_array- Entry point
* @a: pointer to pass to _print_array function
* @n: variable to pass to _print_array function
* Return: void (Success)
*/
void print_array(int *a, int n)
{
if (n == 1)
{
_putchar(*a);
}
else
{
_putchar(*a);
_putchar(',');
_putchar(' ');
return print_array(a + 1, n - 1);
