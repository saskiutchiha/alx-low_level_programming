#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = '0', b;
int i;
for (i = 0; i <= 9; i++)
{
b = a + i;
putchar(b);
}
putchar('\n');
return (0);
}
