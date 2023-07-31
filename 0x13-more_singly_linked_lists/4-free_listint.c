#include <stdlib.h>
#include "lists.h"
/**
 * free_listin - Entry point
 *@h : variable to pass to free_listin function
 * Return: void (Success)
 */
void free_listint(listint_t *head)
{
free(head);
}  
