#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j > i)
{
for (k = 0; k <= 9; k++)
{
if (k > j)
{
putchar(i + 48);
putchar(j + 48);
putchar(k + 48);
if (i != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
