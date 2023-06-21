#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int a = 1, b = 2, s = 0, sum;
sum = a + b;
while ( s < 2000000)
{
sum = sum + s;
s = a + b;
a = b;
b = s;
}
printf("%ld",sum);
putchar('\n');
return (0);
}
