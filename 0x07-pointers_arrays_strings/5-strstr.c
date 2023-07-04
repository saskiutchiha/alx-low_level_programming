#include <string.h>
char *_strstr(char *haystack, char *needle)
{
int i=0;
char *d;
d = needle;
int a =0;
for (;*(needle+a) > 0 && *(needle+a)<127;a++)
  {
  }
for (;*haystack < 127 && *haystack > 0 ;haystack++)
{
if (*haystack == *needle)
{
for (;*needle < 127 && *needle > 0;needle++)
{
if(*(needle+i) != *(haystack+i))
{
break;
}
i++;
}
if (i == a-1)
{
return (d);
}
i=0;
}
}
return NULL;
}
