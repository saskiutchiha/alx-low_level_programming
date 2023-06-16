#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a[100]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
char *p;
for (p=&a[0];*p!='\0';p++)
{
putchar(*p);
}
    return (1);
}
