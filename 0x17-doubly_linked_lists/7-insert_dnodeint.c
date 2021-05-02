#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: reference to the head of the list
 * @idx: position
 * @n: number to add in the node
 * Return: node created
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !h)
		return (0);

	new->n = n;
	new->prev = 0;

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (curr && 1 < idx--)
		if (curr->next)
			curr = curr->next;
		else
			return (0);

	new->next = curr->next;
	new->prev = curr;

	if (curr->next)
		curr->next->prev = new;

	curr->next = new;

	return (new);
}
