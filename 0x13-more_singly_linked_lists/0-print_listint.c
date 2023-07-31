#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - Entry point
 *@h : variable to pass to print_listint function
 * Return: size_t (Success)
 */
size_t print_listint(const listint_t *h)
{
const listint_t *q;
size_t a = 0;
q = h;
if (q == NULL)
{
return (a);
}
while (q != NULL)
{
printf("%d\n",q->n);
a++;
q = q->next;
}
return (a);
}
