#include <stdio.h>
/**
 * 11-print_to_98.c
 *
 * This file contains a program that prints all the numbers from a given
 * integer up to 98, inclusive.
 */
/**
* print_to_98 Entry point

* @n: Number to pass to print_to_98 function
* Return: void (Success)
*/
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i > 98; i--)
{
printf("%d", i);
printf(", ");
}
}
if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d", i);
printf(", ");
}
}
printf("98");
printf("\n");
}
