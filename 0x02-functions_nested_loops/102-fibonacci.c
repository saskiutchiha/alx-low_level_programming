#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long  int a = 1, b = 2, s, i;
printf("%ld", a);
printf(", ");
printf("%ld", b);
for (i = 1 ; i <= 48 ; i++)
{
printf(", ");
s = a + b;
printf("%ld", s);
a = b;
b = s;
}
printf('\n');
return (0);
}
