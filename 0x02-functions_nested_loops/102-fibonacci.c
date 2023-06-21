#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1; b= 2 ,s, i;
printf("%d", a);
printf(", ");
printf("%d", b);
for (i=1;i <= 48;i++)
{
printf(", ");
s = a + b;
printf("%d", s);
a = b;
b = s;
return (0);
}
