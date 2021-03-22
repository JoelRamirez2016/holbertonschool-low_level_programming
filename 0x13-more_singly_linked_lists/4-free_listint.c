#include "lists.h"

/**
 * free_listint - free memory of a listint_t
 * @head: head of the list to free
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
