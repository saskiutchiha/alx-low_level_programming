#include <stdarg.h>
#include <stdio.h>
/**
 *  print_numbers - Entry point
 *@n : variable to pass to  print_numbersfunction
 * Return: void (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int a = n, i, x;
va_list arg;
va_start(arg, n);
for (i = 0; i < a; i++)
{
x = va_arg(arg, int);
printf("%d", x);
if (separator != NULL && i < a - 1)
{
printf("%s", separator);
}
}
va_end(arg);
putchar('\n');
}
