#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - Entry point
 *@head : variable to pass to add_nodeint function
  *@n : variable to pass to add_nodeint function
 * Return: listint_t (Success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *q;
q = malloc(sizeof(listint_t));
if (q == NULL)
{
  return (NULL);
}
q->n = n;
q->next = *head;
*head = q;
return (q);
}
