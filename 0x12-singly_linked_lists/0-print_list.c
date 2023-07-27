#include "lists.h"
#include <stdio.h>
#include <stddef.h>
size_t print_list(const list_t *h)
{
list _t *q;
q=h;
size_t ;
int a=0;
while(q != NULL)
{
if (str == NULL)
{
printf("[0] (nil)\n");
a++;
}
else
{
printf("[%d] (%s)\n",q->len,q->str);
a++;
}
q = q->next;
}
n =a;
return n;
}
