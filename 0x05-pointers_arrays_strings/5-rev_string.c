#include "main.h"
/**
*   rev_string- Entry point
* @s: pointer to pass to rev_string function
* Return: void (Success)
*/
void rev_string(char *s)
{
char *p = s, a;
for (; *s > 0 && *s < 127; s++)
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
