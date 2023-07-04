char *_strstr(char *haystack, char *needle)
{
int i=0;
char *d;
d = needle;
for (;*haystack < 127 && *haystack > 0 ;haystac++)
{
if (*haystack == *needle)
{
for (;*needle < 127 && *needle > 0;needle++)
{
if(*needle != *(haystack+i))
{
break;
}
i++;
}
if (i == strlen(needle)-1)
{
return (d);
}
}
}
return NULL;
}
