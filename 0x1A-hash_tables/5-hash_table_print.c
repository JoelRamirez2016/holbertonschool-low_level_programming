#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int print_separator = 0;
	hash_node_t *curr;

	if(ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			curr = ht->array[i];
			while (curr)
			{
				if (print_separator)
					printf(", ");
				printf("'%s': '%s'", curr->key, curr->value);
				print_separator = 1;
				curr = curr->next;
			}
		}
		printf("}\n");
	}
}
