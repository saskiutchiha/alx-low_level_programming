#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char *_strdup(char *str)
{
char* q;
int i,d=strlen(str);
  if (str == NULL)
  {
    q = NULL;
    return (q);
  }
q = malloc(strlen(str)*sizeof(char));
if (q == NULL)
{
return NULL;
}
for (i=0;i<d;i++)
{
*(q+i) = *(str+i);
}
return q;
}