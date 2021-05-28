#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key in a has table
 * @ht: hast table to check
 * @key: key to check in hast table
 * Return: value associated with the element or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *c = ht->array[key_index((const unsigned char *)key, ht->size)];

	while (c)
	{
		if (strcmp(c->key, key) == 0)
			return (c->value);
		c = c->next;
	}
	return (0);
}
