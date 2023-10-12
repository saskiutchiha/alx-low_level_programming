#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
dlistint_t *add_dnodeint(dlistint_t **head, const int n){
dlistint_t *elem;
elem = malloc(sizeof(dlistint_t));
if (elem == NULL){
return NULL;
}
elem->n = n;
elem->next = *head;
elem->prev = NULL;
if (*head != NULL){
*head->prev = elem;
}
*head = elem;
return elem;
}
