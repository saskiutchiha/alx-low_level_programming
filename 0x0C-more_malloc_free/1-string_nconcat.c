#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int a,i,b,c,d;
char *q;

b = strlen(s1);
c= n;
d = strlen(s2);
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
