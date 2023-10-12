#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
void free_dlistint(dlistint_t *head){
if (head != NULL){
free_dlistint(head->next);
free(head);
}
}
