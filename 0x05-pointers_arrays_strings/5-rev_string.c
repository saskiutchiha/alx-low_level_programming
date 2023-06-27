#include "main.h"
/**
*   print_rev- Entry point
* @s: pointer to pass to print_rev function
* Return: void (Success)
*/


{
char *p = s, a;
for (; *s > 0 && *s < 12; s++)
{
}
s--;
while (s > p)
{
a = *s;
*s = *p;
*p = a;
s--;
p++;
}
}
