#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the list
 * Return: number of elements of a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}