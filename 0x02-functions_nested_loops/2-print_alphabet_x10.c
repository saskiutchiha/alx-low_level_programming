#include <stdio.h>
/**
*  print_alphabet_x10- Entry point
*
* Return: Always void (Success)
*/
void print_alphabet_x10(void)
{
int j, i;
for (j = 0; j < 10; j++)
{
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
}
