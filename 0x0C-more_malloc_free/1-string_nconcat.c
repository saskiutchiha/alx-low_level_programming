#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int a,i,b,c,d;
char *q;
if (s1 == NULL)
{
        b=0;
}
  else
{
  b = strlen(s1);
}
if(s2 == NULL)
{
        d=0;
}
  else
{
  d = strlen(s2);
}

c= n;

a = b + c;
if (c > d)
{
c = d;
}
q = malloc(a * sizeof(char));
if (q == NULL)
{
return q;
}
for (i=0;i<a;i++)
{
if(i < b)
{
*(q+i) = *(s1+i);
}
else
{
*(q+i) = *(s2 +i-b);
}
}
return q;
}
