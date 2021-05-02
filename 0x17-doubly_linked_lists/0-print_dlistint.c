#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: number of elements of a list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		elements++;
	}

	return (elements);
}
