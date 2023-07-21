#include <stdarg.h>
/**
 * sum_them_all - Entry point
 *@n : variable to pass to sum_them_all function
 * Return: integer (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
int a = n, i, x, sum = 0;
va_list arg;
va_start(arg, n);
for (i = 0; i < a; i++)
{
x = va_arg(arg, int);
sum = sum + x;
}
va_end(arg);
return (sum);
}
