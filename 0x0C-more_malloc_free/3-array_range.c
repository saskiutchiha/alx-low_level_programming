#include <stdlib>
#include <stddef.h>


int *array_range(int min, int max)
{
int *q;
if (min > max)
{
return NULL;
}
else
{
q = malloc((max-min+1) * sizeof(int));
if (q == NULL)
{
return NULL;
}
else
{
for (i =min;i<= max;i++)
{
*(q+i-min) = i;
}
}
return q;
}
}
