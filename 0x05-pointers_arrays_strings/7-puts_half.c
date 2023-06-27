#include <string.h>
#include "main.h"
void puts_half(char *str)
{
int i;
i = (strlen(str) - 1)/2;
str = str + i;
for (;*str > 0 && *str<127;str++)
{
_putchar(*str);
}
_putchar('\n');
}
