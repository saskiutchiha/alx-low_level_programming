#include <stdio.h>
int main(void)
{
int i;
for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
s = s + i;
}
printf("%d",s);
}
