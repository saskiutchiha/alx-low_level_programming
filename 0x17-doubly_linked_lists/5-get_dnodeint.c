#include "lists.h"
#include <stddef.h>
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index){
while (head != NULL && index > 0){
  head = head->next;
  index--;
}
  if (head == NULL){
    return NULL;
  }
  return head;
}
