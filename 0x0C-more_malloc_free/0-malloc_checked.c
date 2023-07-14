#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
if (b == 0)
{
return (NULL);
}
return (malloc(b));
}
