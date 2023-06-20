#include <stdio.h>
/**
*  print_alphabet- Entry point
*
* Return: Always void (Success)
*/
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
