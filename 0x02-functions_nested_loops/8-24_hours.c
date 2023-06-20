#include <stdio.h>
void jack_bauer(void)
{
int a = 0, b = 0, c, d;
while (a != 24)
{
c = a / 10;
d = a % 10;
putchar(c + 48);
putchar(d + 48);
putchar(':')
c = b / 10;
d = b % 10;
putchar(c + 48);
putchar(d + 48);
putchar('\n');
b++
if (b == 60)
{
b = 0;
a++
}
}
