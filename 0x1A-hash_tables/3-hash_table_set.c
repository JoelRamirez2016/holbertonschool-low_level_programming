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
	hash_node_t *curr;
	char *c_k = key ? strdup(key) : 0, *c_v = value ? strdup(value) : 0;

	if (!ht || !htn || !key || !*key || !value || !*value || !c_v || !c_k)
	{
		if (htn)
			free(htn);
		if (c_v)
			free(c_v);
		if (c_k)
			free(c_k);
		return (0);
	}
	curr = ht->array[key_index((const unsigned char *) key, ht->size)];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(htn);
			free(c_k);
			free(curr->value);
			curr->value = c_v;
			return (1);
		}
		curr = curr->next;
	}
	htn->key = c_k;
	htn->value = c_v;
	htn->next = ht->array[key_index((const unsigned char *) key, ht->size)];
	ht->array[key_index((const unsigned char *) key, ht->size)] = htn;
	return (1);
}
