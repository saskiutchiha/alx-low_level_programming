#include <stdio.h>
/**
*   print_sign- Entry point
*
* Return: integer (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
if (n == 0)
{
putchar('0');
return (0);
}
if (n < 0)
{
putchar('-');
return (-1);
}
}
