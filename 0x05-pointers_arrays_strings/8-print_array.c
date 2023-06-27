#include "main.h"
/**
*   print_array- Entry point
* @a: pointer to pass to _print_array function
* @n: variable to pass to _print_array function
* Return: void (Success)
*/
void print_array(int *a, int n)
int x ,y,z;
{
if (*a < 0)
{
_putchar('-')
x = -*a;
}
else 
{
x = *a;
}
if (n == 1)
{
while (x !=0)
{
y = x % 10;
  
_putchar(*a + 48);
}
else
{
_putchar(*a + 48);
_putchar(',');
_putchar(' ');
print_array(a + 1, n - 1);
