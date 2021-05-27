#include "hash_tables.h"

/***/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *curr;

	for(i = 0; i < ht->size; i++)
		while(ht->array[i])
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			curr = ht->array[i];
			ht->array[i] = curr->next;
			free(curr);				
		}
	
	free(ht->array);
	free(ht);
}
