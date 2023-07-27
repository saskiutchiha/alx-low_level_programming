#include <stddef.h>
#include "lists.h"
size_t list_len(const list_t *h)
{
size_t a=0;
while(h != NULL)
{
a++;
h = h->next;
}
return a;
}
