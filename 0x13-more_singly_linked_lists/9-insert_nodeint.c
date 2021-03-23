#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: reference to the head of the list
 * @idx: position to add the node
 * @n: number in the new node
 * Return: address of the new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list = *head, *node = malloc(sizeof(listint_t));

	if (!node)
		return (0);

	while (list && 1 < idx--)
		if (list->next)
			list = list->next;
		else
			return (0);
	node->n = n;
	node->next = list->next;
	list->next = node;

	return (node);
}
