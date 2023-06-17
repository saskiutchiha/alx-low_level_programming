#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, a, b;
for (i = 0; i <= 98; i++)
{
for (j = 0; j <= 99; j++)
{
if (i < j)
{
a = i / 10;
b = i % 10;
putchar(a + 48);
putchar(b + 48);
putchar(' ');
a = j / 10;
b = j % 10;
putchar(a + 48);
putchar(b + 48);
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
