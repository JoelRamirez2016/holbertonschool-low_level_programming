#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (0);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
	{
		free(ht);
		return (0);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = 0;

	return (ht);
}
