#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - Entry point
 *@head : variable to pass to add_nodeint_end function
  *@n : variable to pass to add_nodeint_end function
 * Return: listint_t (Success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *q,*p = *head;
q = malloc(sizeof(listint_t));
if (q == NULL)
{
return (NULL);
}
q->n = n;
q->next = NULL;
if (*head == NULL)
{
*head = q;
}
else
{
while(p->next != NULL)
{
p = p->next;
}
p->next = q;
}
return (q);
}
