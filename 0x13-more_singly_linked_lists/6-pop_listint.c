#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
int pop_listint(listint_t **head)
{
int a;
listint_t *q=*head;
if (*head == NULL)
{
return 0;
}
a = (*head)->n;
*head = (*head)->next;
free(q);
return a;
}
