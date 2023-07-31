#include <stddef.h>
#include "lists.h"
/**
 * listint_len - Entry point
 *@h : variable to pass to listint_len function
 * Return: size_t (Success)
 */
size_t listint_len(const listint_t *h)
{
size_t a = 0;
while(h != NULL)
{
a++;
h = h->next;
}
return (a);
}
