#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Entry point
 *@h : variable to pass to print_list function
 * Return: size_t (Success)
 */
size_t print_list(const list_t *h)
{
const list_t *q;
size_t a = 0;
q = h;
if (q == NULL)
{
return (a);
}
while (q != NULL)
{
if (q->str == NULL)
{
printf("[0] (nil)\n");
a++;
}
else
{
printf("[%u] %s\n", q->len, q->str);
a++;
}
q = q->next;
}
return (a);
}
