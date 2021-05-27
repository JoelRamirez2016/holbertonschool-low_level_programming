#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key of the value
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *htn = malloc(sizeof(hash_node_t));

	if (!ht || !htn || !key || !*key || !value || !*value)
	{
		if (htn)
			free(htn);
		return (0);
	}

	htn->key = strdup(key);
	htn->value = strdup(value);

	if (!htn->key || !htn->value)
	{
		free(htn);
		return (0);
	}

	htn->next = ht->array[key_index((const unsigned char *) key, ht->size)];
	ht->array[key_index((const unsigned char *) key, ht->size)] = htn;

	return (1);
}
