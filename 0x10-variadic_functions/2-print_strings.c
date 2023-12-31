#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_strings - Entry point
 *@n : variable to pass to print_strings function
 *@seperator : variable to pass to print_strings function
 * Return: void (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
int a = n, i;
char *str;
va_list args;
va_start(args, n);
for (i = 0; i < a; i++)
{
str = va_arg(args, char*);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (separator != NULL && i < a - 1)
{
printf("%s", separator);
}
}
putchar('\n');
va_end(args);
}
