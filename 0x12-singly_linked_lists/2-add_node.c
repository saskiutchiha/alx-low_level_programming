#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
list_t *q;
unsigned int a=strlen(str);
q = malloc(sizeof(list_t));
if (q == NULL)
{
  return NULL;
}
q->len = a;
q->str = strdup(str);
q->next = *head;
*head = q;

return q;
}
