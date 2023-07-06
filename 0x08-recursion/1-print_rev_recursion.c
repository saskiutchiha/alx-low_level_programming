#include <stdio.h>
/**
* _print_rev_recursion- Entry point
* @s: Number to pass to  _print_rev_recursion function
* Return: void (Success)
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
printf("%c", *s);
}
