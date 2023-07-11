#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
int a,b,i;
char* q;
a = strlen(s1) + strlen(s2);
b = strlen(s1);
c = strlen(s2);
q = malloc(a*sizeof(char));
if(q == NULL)
{
return q;
}
for (i=0;i<a;i++)
{
if (s1 != NULL)
{
if(i<b)
{
*(q+i) = *(s1+i);
}
}
if (s2 != NULL)
{
if(i>=b)
{
*(q+i) = *(s2+i-b);
}
}
}
return q;
}
