#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at the given index of a listint_t
 * @head: reference to the head of the list
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if |failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list = *head;

	if (!list)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(list);
		return (1);
	}

	while (index-- > 1)
		if (list->next)
			list = list->next;
		else
			return (-1);

	free(list->next);
	list->next = (list->next)->next;
	return (1);
}
