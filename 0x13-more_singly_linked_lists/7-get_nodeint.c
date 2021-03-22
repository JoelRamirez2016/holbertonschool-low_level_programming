#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t
 * @head: reference to the head of the list
 * @index: index of the node, starting in 0
 * Return: nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index > 0 && head)
	{
		head = head->next;
		index--;
	}
	return (head);
}

