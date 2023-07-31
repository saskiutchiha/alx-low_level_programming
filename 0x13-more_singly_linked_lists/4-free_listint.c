#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_listin - Entry point
 *@h : variable to pass to free_listin function
 * Return: void (Success)
 */
void free_listint(listint_t *head)
{
listint_t *q;
if (head != NULL)
{
q=h;
head = head->next;
free(q);
free_listint(head);
}
}  
