#include <stdlib.h>
/**
 * create_array- Entry point
 *@b : variable to pass to *malloc_checked function
 * Return: void (Success)
 */
void *malloc_checked(unsigned int b)
{
if (b == 0)
{
return (NULL);
}
return (malloc(b));
}
