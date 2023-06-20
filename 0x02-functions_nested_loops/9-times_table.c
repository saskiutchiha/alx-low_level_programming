#include <stdio.h>
void times_table(void)
{
int a =0, i, j, s = 0;
for (i = 0; i <= 9;i++)
{
putchar('0');
for (j = 0;j <= 8; j++)
{
printf("%d", s);
printf(",  ");
s = s + a;
}
printf("%d", s);
putchar('$');
a++;
s = 0;
putchar('\n');
}
}
