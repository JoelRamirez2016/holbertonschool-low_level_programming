#include "lists.h"

/**
 * free_listint_safe - free a listint_t with a loop
 * @h: reference to the head of the list
 * Return: number of nodes frees
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *nodes[1024];
	int i, size = 0;

	for (i = 0; i < 1024; i++)
		nodes[i] = 0;

	while (h && *h)
	{
		for (i = 0; nodes[i] && nodes[i] != *h; i++)
		;

		if (!nodes[i])
		{
			nodes[i] = *h;
			free(*h);
			*h = (*h)->next;
			size++;
		}
		else
		{
			*h = 0;
			break;
		}
	}
	h = 0;
	return (size);
}
