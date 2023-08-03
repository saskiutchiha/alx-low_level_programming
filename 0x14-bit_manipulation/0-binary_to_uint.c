#include <string.h>
#include <stddef.h>
#include <math.h>
unsigned int binary_to_uint(const char *b)
{
int a = strlen(b),i;
unsigned int sum = 0,c =1;
i=a-1;
if (b == NULL)
{
return 0;
}
for (;i>=0;i--)
{
if (b[i] != '0' && b[i] != '1')
{
return 0;
}
sum = sum + (b[i] - 48) * c;
c = c*2;
}
return sum;
}
