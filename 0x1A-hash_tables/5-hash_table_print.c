#include "hash_tables.h"

/***/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int print_separator = 0;

	printf("{");
	for(i = 0; i < ht->size; i++)
		if (ht->array[i])
		{
			if (print_separator)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			print_separator = 1;
		}
	
	printf("}\n");
}
