#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n){

dlistint_t *elem,*q=*head;
elem = malloc(sizeof(dlistint_t));
if (elem == NULL){
return NULL;
}
elem->n = n;
elem->next = NULL;
if (q == NULL){
elem->prev = NULL;
*head = elem;
return elem;
}
while(q->next != NULL){
q = q->next;
}
q->next = elem;
elem->prev = q;
return elem;
}
