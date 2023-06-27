#include <stdio.h>
int _atoi(char *s)
{
int i=0 ,sum=0,a=0;

for (;*s > 0 && *s < 127; s++)
{
if (*s > 46 && *s < 59)
{
if (*(s-1) == '-')
{
a++;
}
i = *s - 48;
sum = sum * 10 + i ;
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
