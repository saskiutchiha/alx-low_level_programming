#include <stdio.h>
/**
*  add- Entry point
* @n: Number to pass to print_to_98 function
* Return: integer (Success)
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
