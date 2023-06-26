#include <stddef.h>
/**
*  print_line- Entry point
* @s: pointer to pass to _strlen function
* Return: integer (Success)
*/
int _strlen(char *s)
{
int d = 0;
for (; *s < 127 && *s > 0; s++)
{
d++;
}
return (d);
}
