#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to the head of the list
 * @str: string to add in the node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int size_s = 0;
	list_t *end_l = *head, *n_node = malloc(sizeof(list_t));

	if (!n_node)
		return (NULL);

	s = strdup(str);

	if (!s)
	{
		free(n_node);
		return (NULL);
	}

	while (s[size_s])
		size_s++;

	n_node->str = s;
	n_node->len = size_s;
	n_node->next = NULL;

	if (!(*head))
		*head = n_node;
	else
	{
		while (end_l->next)
			end_l = end_l->next;
		end_l->next = n_node;
	}

	return (*head);
}

