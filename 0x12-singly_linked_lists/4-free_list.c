#include "lists.h"

/**
 * free_list - free a list_t and his elements
 * @head: head of the list_t
*/

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
