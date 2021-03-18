#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * @h: head of the list
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	if (h)
		return (1 + list_len(h->next));
	else
		return (0);
}
