#include <stdlib.h>
char *create_array(unsigned int size, char c)

{
char* q;
int i,d;
  d = size;
q = malloc(size*sizeof(char));
for (i=0;i<d;i++)
{
*(q +i)= c;
}
return (q);
}
