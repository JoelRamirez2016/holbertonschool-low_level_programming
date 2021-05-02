#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: reference to the head of the list
 * @index: index of the node to get
 * Return: nth node of a list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0 && head)
	{
		head = head->next;
		index--;
	}

	return (head);
}
