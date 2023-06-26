/**
*  print_line- Entry point
* @s: pointer to pass to _strlen function
* Return: integer (Success)
*/
int _strlen(char *s)
{
int d = 0;
for (;*s; !s ;s++)
{
d++;
}
return (d);
}
