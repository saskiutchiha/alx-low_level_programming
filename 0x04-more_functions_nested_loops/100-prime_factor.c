#include <stdio.h>
char nn(long int num)
{
long int j, k = 0, i, a;
for (j =2 ;j <= num; j++)
{
for (i = 2 ;i < j; i++)
{
if (j % i == 0)
{
k++;
}
}
if (k == 0)
{
if (num % j == 0)
{
a = num / j;
break;
}
}
k=0;
}
if (a == 1)
{
printf("%ld", num);
return ('0');
}
else
{
printf("%ld", j);
return nn(a);
}
}
int main(void)
{
/*printf("the prime factore of 612852475143 are ");*/
nn(612852475143);
printf("\n");
return 0;
}

