#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: reference to the head of the list
 * @n: number to add in the new node
 * Return: node created
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (0);

	new->n = n;
	new->prev = 0;
	new->next = 0;

	if (!*head)
		*head = new;
	else
	{
		while (curr->next)
			curr = curr->next;
		new->prev = curr;
		curr->next = new;
	}
	return (new);
}
