#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a', b;
int i;
for (i = 0; i <= 25; i++)
{
b = a + i;
if (b != 'e' && b != 'q')
{
putchar(b);
}
}
puchar('\n');
return (0);
}
