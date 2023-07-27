#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
list_t *q,*p =*head;

q = malloc(sizeof(list_t));
if (q ==NULL)
{
return NULL;
}
q->str = strdup(str);
q->len = strlen(str);
q->next = NULL;
if (*head == NULL)
{
*head = q;
}
else
{
while(p->next!=NULL)
{
p = p->next;
}
p->next = q;
}
return q;
}
