#include <stddef.h>
#include "lists.h"
/**
 * list_len - Entry point
 *@h : variable to pass to list_len function
 * Return: size_t (Success)
 */
size_t list_len(const list_t *h)
{
size_t a = 0;
while(h != NULL)
{
a++;
h = h->next;
}
return (a);
}
