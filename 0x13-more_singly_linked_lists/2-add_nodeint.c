#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: reference to the head of the list
 * @n: number to add in the node
 * Return: reference to the node in the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_h = malloc(sizeof(listint_t));

	if (!new_h)
		return (0);

	new_h->n = n;
	new_h->next = *head;

	*head = new_h;

	return (new_h);
}
