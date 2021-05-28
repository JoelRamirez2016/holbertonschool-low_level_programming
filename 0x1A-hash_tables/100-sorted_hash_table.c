#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the table
 * Return: pointer to the newly created hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i;
	shash_table_t *sht = malloc(sizeof(shash_table_t));

	if (!ht)
		return (0);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);

	if (!sht->array)
	{
		free(sht);
		return (0);
	}

	for (i = 0; i < size; i++)
		sht->array[i] = 0;

	return (sht);
}
