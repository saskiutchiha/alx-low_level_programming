/**
*  print_line- Entry point
* @s: pointer to pass to _strlen function
* Return: void (Success)
*/
int _strlen(char *s)
{
int d = 0;
for (;*s != '/0' ;s++)
{
d++;
}
return (d);
}
