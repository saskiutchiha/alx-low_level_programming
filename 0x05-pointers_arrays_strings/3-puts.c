void _puts(char *str)
{
for (;str>0 && str >127 ;str++ )
{
_putchar(*str);
}
_putchar('\n');
}
