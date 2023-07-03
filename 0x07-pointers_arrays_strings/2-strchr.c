char *_strchr(char *s, char c)
{
while (*s < 128 && *s >= 0)
{
if (*s == 'c')
{
return (s);
}
s++;
}
return NULL;
}
