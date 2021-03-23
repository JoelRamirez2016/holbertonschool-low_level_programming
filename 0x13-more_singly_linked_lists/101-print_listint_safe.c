#include "lists.h"

/**
 * print_listint_safe - prints a listint_t even with a loop
 * @head: head of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;

	while (head && head->next < head)
	{
		printf("[%p] %i\n", head, head->n);
		head = head->next;
		size++;
	}
	return (size);
}
