/**
*  _strchr- Entry point
* @haystack: pointer to pass to _strst function
* @needle: pointer to pass to _strst function
* Return: char (Success)
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0;
char *d;
int a = 0;
d = needle;
for (; *(needle + a) > 0 && *(needle + a) < 127; a++)
{
}
for (; *haystack < 127 && *haystack > 0; haystack++)
{
if (*haystack == *needle)
{
for (; *needle < 127 && *needle > 0; needle++)
{
if (*needle != *(haystack + i))
{
break;
}
i++;
}
if (i == a)
{
return (d);
}
i = 0;
needle = d;
}
}
return (NULL);
}
