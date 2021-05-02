#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: reference to the head of the list
 * @n: number to add in the new node
 * Return: number of elements of a list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (0);

	new->n = n;
	new->prev = 0;
	new->next = *head;
	*head = new;

	return (new);
}
