#include <stdlib.h>
#include <stddef.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
 return NULL;
}
else
{
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
 return NULL;
}
return ptr;
}
}
