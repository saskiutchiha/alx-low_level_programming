#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * string_nconcat- Entry point
 *@s1 : variable to pass to string_nconcat function
 *@s2 : variable to pass to string_nconcat function
 *@n : variable to pass to string_nconcat function
 * Return: char (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int a, i, b, c, d;
char *q;
if (s1 == NULL)
{
b = 0;
}
else
{
b = strlen(s1);
}
if (s2 == NULL)
{
d = 0;
}
else
{
d = strlen(s2);
}
c = n;
if (c > d)
{
c = d;
}
a = b + c + 1;
q = malloc(a * sizeof(char));
if (q == NULL)
{
return (q);
}
for (i = 0; i < a - 1; i++)
{
if (i < b)
{
*(q + i) = *(s1 + i);
}
else
{
*(q + i) = *(s2 + i - b);
}
}
*(q + i) = '\0';
return (q);
}
