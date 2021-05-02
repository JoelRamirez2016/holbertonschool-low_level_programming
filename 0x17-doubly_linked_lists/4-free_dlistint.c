#include "lists.h"

/**
 * free_dlistint - free a list and his elements
 * @head: head of the list
*/

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
