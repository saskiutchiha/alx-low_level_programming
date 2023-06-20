#include <stdio.h>
/**
*  times_table- Entry point
*
* Return: Always void (Success)
*/
void times_table(void)
{
int i, j, s = 0;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 8; j++)
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
