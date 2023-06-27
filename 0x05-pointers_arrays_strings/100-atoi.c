#include <stdio.h>
int _atoi(char *s)
int i ,sum=0,a=0;
{
for (;*s > 0 && *s < 127; s++)
{
if (*s == '-')
{
a++;
}
i = *s - 48;
sum = sum * 10 + i ;
}
if (a == 0)
{
printf("%d",sum);
}
else 
{
printf("%d",-sum);
}
}
