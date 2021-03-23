#include "lists.h"

/**
 * print_listint_safe - prints a listint_t even with a loop
 * @head: head of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;

	if (!head)
		return (0);

	while (head && head->next < head)
	{
		printf("[%p] %i\n", (void *) head, head->n);
		head = head->next;
		size++;
	}
	if (head && head->next >= head)
	{
		printf("[%p] %i\n", (void *) head, head->n);
		printf("-> [%p] %i\n", (void *) head->next, (head->next)->n);
		size++;
	}
	return (size);
}
