#include <stdio.h>
#include <stddef.h>
#include "lists.h"
size_t dlistint_len(const dlistint_t *h){
size_t a=0;
while(h != NULL){
a++;
h = h->next;
}
return (a);
}
