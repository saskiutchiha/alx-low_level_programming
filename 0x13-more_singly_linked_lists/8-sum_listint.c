#include "lists.h"
#include <stddef.h>
/**
 * sum_listint - Entry point
 *@head : variable to pass to sum_listint function
 * Return: integer (Success)
 */
int sum_listint(listint_t *head)
{
listint_t *q;
int a = 0;
q = head;
if (q == NULL)
{
return (a);
}
while (q != NULL)
{
a= a + q->n;
q = q->next;
}
return (a);
}
