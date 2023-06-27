#include <stdio.h>
int _atoi(char *s)
{
int i=0 ,sum=0,a=0;
char *t;
for (;*s > 0 && *s < 127; s++)
{
if (*s >= 48 && *s < 58)
{
if (*(s-1) == '-')
{
a++;
}
i = *s - 48;
sum = sum * 10 + i ;
}
}
if (i==0)
{
return i;
}
else
{
if (a == 0)
{
return (sum);
}
else 
{
return (-sum);
}
}
}
