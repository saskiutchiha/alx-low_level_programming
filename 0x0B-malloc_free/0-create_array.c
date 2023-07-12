#include <stdlib.h>
#include <stddef.h>
/**
 * create_array- Entry point
 *@c : variable to pass to create_array function
 *@size : variable to pass to create_array function
 * Return: char (Success)
 */
char *create_array(unsigned int size, char c)
{
char *q;
int i, d;
d = size;
if (size == 0)
{
return (NULL);
}
q = malloc(size * sizeof(char));
if (q == NULL)
{
return (NULL);
}
for (i = 0; i < d; i++)
{
*(q + i) = c;
}
return (q);
}
