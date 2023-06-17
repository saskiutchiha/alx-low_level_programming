#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j > i)
{
putchar(i + 48);
putchar(j + 48);
if (i != 8) 
{
putchar(',');  
putchar('\t');
}
}
}
}
return (0);
}
