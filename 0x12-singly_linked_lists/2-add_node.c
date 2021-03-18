#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to head to the list_t
 * @str: string to add in the node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int size_str = 0;
	list_t *new_h = malloc(sizeof(list_t));
	char *s;

	while (str[size_str])
		size_str++;

	s = strdup(str);

	if (!new_h)
		return (0);

	if (!s)
	{
		free(new_h);
		return (0);
	}

	new_h->str = s;
	new_h->len = size_str;
	new_h->next = *head;

	*head = new_h;

	return (new_h);
