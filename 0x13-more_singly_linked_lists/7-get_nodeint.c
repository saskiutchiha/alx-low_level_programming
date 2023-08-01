#include <stddef.h>
#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *q;
q = head;
while (q != NULL)
{
if (index == 0)
{
break;
}
q = q->next;
index--;
}
if (q == NULL)
{
return NULL;
}
return q;
}
