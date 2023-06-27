#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*   print_array- Entry point
* @a: pointer to pass to _print_array function
* @n: variable to pass to _print_array function
* Return: void (Success)
*/
void print_array(int *a, int n)
{
if (n < 0)
{
n = strlen(a) + n + 1;
}
if (n == 1)
{
printf("%d",*a);
}
else
{
printf("%d", *a);
putchar(',');
putchar(' ');
print_array(a + 1, n - 1);
}
}
