#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: head of the list to print
 * Return: size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
