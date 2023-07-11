#include <stdlib.h>
#include <stddef.h>
char *str_concat(char *s1, char *s2)
{
int a,b,i;
char* q;
a = strlen(s1) + strlen(s2);
b = strlen(s1);
q = malloc(a*sizeof(char));
if(q == NULL)
{
return q;
}
for (i=0;i<a;i++)
{
if(i<b)
{
*(q+i) = *(s1+i);
}
else
{
*(q+i) = *(s2+i);
}
}
}
