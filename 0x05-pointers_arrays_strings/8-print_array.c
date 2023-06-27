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
int i ;
i = sizeof(a) / sizeof(*a);
if (n < 0)
{
n = i + n + 1;
}
if (n > 0)
{
for (; a < a + n - 1; a++)
{
printf("%d", *a);
putchar(',');
putchar(' ');
}
printf("%d", *a);
}
putchar('\n')
}
