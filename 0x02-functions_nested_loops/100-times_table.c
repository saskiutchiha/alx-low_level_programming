#include <stdio.h>
/**
*  times_table- Entry point
* @n: Number to pass to times_table function
* Return: void (Success)
*/
void times_table(int n)
{
int i, j, s = 0;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n -1; j++)
{
printf("%d", s);
if ((s + i) < 10)
{
printf(",  ");
}
else
{
printf(", ");
}
s = s + i;
}
printf("%d", s);
s = 0;
putchar('\n');
}
}
