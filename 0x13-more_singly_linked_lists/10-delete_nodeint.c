#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
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
return -1;
}
if (idx == 0)
{
*head = (*head)->next;
free(q);
return 1;
}
if (idx == 1)
{
p = q-?next;
q->next = p->next;
free(p);
return 1;
}
}
