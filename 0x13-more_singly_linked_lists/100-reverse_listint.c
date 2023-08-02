#include <stddef.h>
#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
listint_t *p = NULL,*q = *head;
while (q != NULL)
{
q = (*head)->next;
(*head)->next = p;
p = *head;
*head = q;
}
*head = p;
return p;
}
