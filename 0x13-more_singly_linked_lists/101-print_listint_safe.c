#include "lists.h"

/**
 * print_listint_safe - prints a listint_t even with a loop
 * @head: head of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *nodes[100];
	size_t size = 0;
	int i;

	for (i = 0; i < 100; i++)
		nodes[i] = 0;

	while (head)
	{
		for (i = 0; nodes[i] && nodes[i] != head; i++)
		;

		if (!nodes[i])
		{
			nodes[i] = head;
			printf("[%p] %i\n", (void *) head, head->n);
			head = head->next;
			size++;
		}
		else
		{
			printf("-> [%p] %i\n", (void *) head, head->n);
			break;
		}
	}
	return (size);
}
