#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *q,*p;
q = *head;
while (q != NULL && idx > 0)
{
if (idx == 1)
{
break;
}
q = q->next;
idx--;
}
if (q == NULL)
{
return NULL;
}
p = malloc(sizeof(listint_t));
if (p == NULL)
{
return NULL;
}
p->n = n;
if (idx == 0)
{
p->next = *head;
*head = p;
}
if (idx == 1)
{
p->next = q->next;
q->next =p;
}
return p;
}
