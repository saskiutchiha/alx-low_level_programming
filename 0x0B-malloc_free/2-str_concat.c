#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
int a,b,c,i;
char* q;
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
c =0;
}
else
{
  c = strlen(s2);
}
a = c + b;
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
