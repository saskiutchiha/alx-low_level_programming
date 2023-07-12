#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char *argstostr(int ac, char **av)

{
char** q;
int i,j,a=0,b;
if (a== 0 || av == NULL)
{
return NULL;
}
for(i=0;i<ac;i++)
{
b = strlen(av[i]);
a = a + b;
{
q = malloc(ac * sizeof(char*));
if (q == NULL)
{
return NULL;
}
for (i=0;i<ac;i++)
{
b = strlen(av[i]);
q[i] = malloc((b+1) * sizeof(char));
}
b = strlen(av[i]) ;
for (i=0;i<ac;i++)
{
for (j=0;j < b;j++)
{
q[i][j] = av[i][j];
}
q[i][j] = '\n';
}
return q;
}
