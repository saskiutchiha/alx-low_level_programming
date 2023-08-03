#include <string.h>
#include <stddef.h>

unsigned int binary_to_uint(const char *b)
{
int a = strlen(b),i;
unsigned int sum = 0;
const char *q = b + a;
i=a;
if (b == NULL)
{
return 0;
}
for (;i>=0;i--)
{
if (b[i] != '0' || b[i] != '1')
{
return 0;
}
sum = sum + (b[i]+ 48) * (2 ** (a-i));
}
return sum;
}
