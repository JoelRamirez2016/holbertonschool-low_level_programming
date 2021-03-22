#include "lists.h"

/**
 * listint_len - get the number of elements in a linked listint_t
 * @h: head of the list
 * Return: size of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
