#include <stddef.h>
/**
*  print_line- Entry point
* @s: pointer to pass to _strlen function
* Return: integer (Success)
*/
int _strlen(char *s)
{
int d = 0;
for (;*s != NULL;s++)
{
d++;
}
return (d);
}
