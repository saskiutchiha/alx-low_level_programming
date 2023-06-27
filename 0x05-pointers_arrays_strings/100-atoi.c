#include <stdio.h>
int _atoi(char *s)
{
int i=0 ,sum=0,a=0;

for (;*s > 0 && *s < 127; s++)
{
if (*s > 47 && *s < 58)
{
if (*(s-1) == '-')
{
a++;
}
i = *s - 48;
sum = sum * 10 + i ;
if (*(s+1) > 57 && *(s+1) < 48)
{
break;
}
}
}
if (sum==0)
{
return sum;
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
