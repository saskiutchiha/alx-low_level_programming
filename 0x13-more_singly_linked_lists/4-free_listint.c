#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_listint - Entry point
 *@head : variable to pass to free_listint function
 * Return: void (Success)
 */
void free_listint(listint_t *head)
{
listint_t *q;
if (head != NULL)
{
q=head;
head = head->next;
free(q);
free_listint(head);
}
}  
