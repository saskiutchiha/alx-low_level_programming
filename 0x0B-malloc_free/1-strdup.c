#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char *_strdup(char *str)
{
char* q;
int i;
q = malloc(strlen(str)*sizeof(char));
if (q == NULL)
{
return NULL;
}
for (i=0;i<strlen(str);i++)
{
*(q+i) = *(str+i);
}
return q;
}
