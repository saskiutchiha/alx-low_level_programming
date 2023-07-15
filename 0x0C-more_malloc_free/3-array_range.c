#include <stdlib.h>
#include <stddef.h>
/**
 * array_range- Entry point
 *@min : variable to pass to array_range function
 *@max : variable to pass to array_range function
 * Return: char (Success)
 */
int *array_range(int min, int max)
{
int *q, i;
if (min > max)
{
return (NULL);
}
else
{
q = malloc((max-min + 1) * sizeof(int));
if (q == NULL)
{
return (NULL);
}
else
{
for (i = min; i <= max; i++)
{
*(q + i - min) = i;
}
}
return (q);
}
}
