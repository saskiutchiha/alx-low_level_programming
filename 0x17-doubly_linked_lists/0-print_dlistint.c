#include <stdio.h>
#include <stddef.h>
#include "lists.h"
size_t print_dlistint(const dlistint_t *h){
size_t a=0;
while(h != NULL){
printf("%d\nh->n);
a++;
h = h->next;
}
return (a);
}
