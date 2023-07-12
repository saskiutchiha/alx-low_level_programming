#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char *argstostr(int ac, char **av)

{
char* q;
int i,j,a=0,b;
if (a== 0 || av == NULL)
{
return NULL;
}
for(i=0;i<ac;i++)
{
b = strlen(av[i]);
a = a + b+1;
{
q = malloc(a * sizeof(char));
if (q == NULL)
{
return NULL;
}
for (i=0;i<ac;i++)
{
b = strlen(av[i]);
q[i] = malloc((b+1) * sizeof(char));
}
b=0;
for (i=0;i<ac;i++)
{
  if (i != 0)
  {
  b = b+ strlen(av[i-1]) +1;
  }
for (j=0;j < b;j++)
{
*(q+j+b) = av[i][j];
}
*(q+j+b) = '\n';
}
return q;
}
