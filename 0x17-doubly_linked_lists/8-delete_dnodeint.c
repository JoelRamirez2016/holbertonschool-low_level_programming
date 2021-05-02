#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: reference to the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;

		if (*head)
			(*head)->prev = 0;
	}
	else
	{
		while (index-- > 0 && curr)
			if (curr->next)
				curr = curr->next;
			else
				return (-1);

		curr->prev->next = curr->next;

		if (curr->next)
			curr->next->prev = curr->prev;
	}

	free(curr);

	return (1);
}
