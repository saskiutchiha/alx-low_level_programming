#include <stdlib.h>
#include "lists.h"
void free_list(list_t *head)
{
  list_t *q;
if (head != NULL)
{
  q=head;
  head = head->next;
free(q->str);
free(q);
free_list(head);
}
}
