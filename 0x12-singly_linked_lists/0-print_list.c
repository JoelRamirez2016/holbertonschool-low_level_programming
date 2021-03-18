#include "lists.h"

/**
 * print_list - print string of a list
 * @h: head of the list
 * Return: number of elements of a list
*/

size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		return (1 + print_list(h->next));
	}
	return (0);
}
