#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: reference to the head of the list
 * @n: number to add in the node
 * Return: node created in the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list = *head, *node = malloc(sizeof(listint_t));

	if (!node)
		return (0);

	node->n = n;
	node->next = NULL;

	if (!(*head))
		*head = node;
	else
	{
		while (list->next)
			list = list->next;
		list->next = node;
	}

	return (node);
}
