#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _calloc- Entry point
 *@nmemeb : variable to pass to _calloc function
 *@size : variable to pass to _calloc function
 * Return: void (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
else
{
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, nmemb * size);
return (ptr);
}
}
