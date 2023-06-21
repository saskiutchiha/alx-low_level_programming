#include <stdio.h>
/**
*  print_times_table- Entry point
* @n: Number to pass to print_times_table function
* Return: void (Success)
*/
void print_times_table(int n)
{
int i, j, s = 0;
if (n > 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n -1; j++)
{
printf("%d", s);
if ((s + i) < 10)
{
printf(",   ");
}
if ((s + i) > 10)
{
printf(",  ");
}
if ((s + i) > 100)
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
}
