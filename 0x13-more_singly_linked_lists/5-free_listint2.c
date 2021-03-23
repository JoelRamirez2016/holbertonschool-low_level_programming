#include "lists.h"

/**
 * free_listint2 - freea memory of a listint_t
 * @head: reference to the head of the list to free
 */

void free_listint2(listint_t **head)
{
	while (head && *head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = 0;
}


