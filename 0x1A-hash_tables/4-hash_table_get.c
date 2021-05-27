#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key in a has table
 * @ht: hast table to check
 * @key: key to check in hast table
 * Return: value associated with the element or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (ht->array[key_index((const unsigned char *) key, ht->size)])
		return (ht->array[key_index((const unsigned char *) key, ht->size)]->value);
	return (0);
}
