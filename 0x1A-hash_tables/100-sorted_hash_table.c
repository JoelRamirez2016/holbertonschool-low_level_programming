#include "hash_tables.h"

int insertSort(shash_table_t *ht, shash_node_t *shtn);

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the table
 * Return: pointer to the newly created hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i;
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (!ht)
		return (0);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (!ht->array)
	{
		free(ht);
		return (0);
	}

	ht->shead = 0;
	ht->stail = 0;

	for (i = 0; i < size; i++)
		ht->array[i] = 0;

	return (ht);
}


/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: sorted hash table
 * @key: key of the value
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *shtn = malloc(sizeof(shash_node_t));
	shash_node_t *c = 0;
	char *c_k = key ? strdup(key) : 0, *c_v = value ? strdup(value) : 0;

	if (!ht || !shtn || !key || !*key || !value || !*value)
	{
		if (shtn)
			free(shtn);
		if (c_v)
			free(c_v);
		if (c_k)
			free(c_k);
		return (0);
	}
	c = ht->array[key_index((const unsigned char *) key, ht->size)];
	while (c)
	{
		if (strcmp(c->key, key) == 0)
		{
			free(shtn);
			free(c_k);
			free(c->value);
			c->value = c_v;
			return (1);
		}
		c = c->next;
	}
	shtn->key = c_k;
	shtn->value = c_v;
	shtn->next = ht->array[key_index((const unsigned char *) key, ht->size)];
	ht->array[key_index((const unsigned char *) key, ht->size)] = shtn;
	return (insertSort(ht, shtn));
}

/**
 * shash_table_get - retrieves a value associated with a key in a shash table
 * @ht: shast table to check
 * @key: key to check in shast table
 * Return: value associated with the element or NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *c;

	if (ht)
		c = ht->array[key_index((const unsigned char *)key, ht->size)];
	else
		return (0);
	while (c)
	{
		if (strcmp(c->key, key) == 0)
			return (c->value);
		c = c->next;
	}
	return (0);
}


/**
 * shash_table_print - prints a shash table ir order
 * @ht: shash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	int print_separator = 0;
	shash_node_t *curr = 0;

	if (ht)
	{
		curr = ht->shead;

		printf("{");
		while (curr)
		{
			if (print_separator)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			print_separator = 1;
			curr = curr->snext;
		}
		printf("}\n");
	}
}


/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int print_separator = 0;
	shash_node_t *curr;

	if (ht)
	{
		curr = ht->stail;
		printf("{");
		while (curr)
		{
			if (print_separator)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			print_separator = 1;
			curr = curr->sprev;
		}
		printf("}\n");
	}
}


/**
 * shash_table_delete - delete a shash table
 * @ht: hash table to delete
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr = ht->shead, *next;

	while (curr)
	{
		free(curr->key);
		free(curr->value);
		free(curr->next);
		next = curr->snext;
		free(curr);
		curr = next;
	}
	free(ht->array);
	free(ht);
}
/**
 * insertSort - insert the new element in its correct position in
 * sorted linked list
 * @ht: shash table with the sorted linked list
 * @shtn: new node to add
 * Return: 1 Always
*/
int insertSort(shash_table_t *ht, shash_node_t *shtn)
{
	int inserted = 0;
	shash_node_t *c = ht->shead;

	if (!ht->shead)
	{
		shtn->sprev = 0;
		shtn->snext = 0;
		ht->shead = shtn;
		ht->stail = shtn;
		return (1);
	}
	while (c)
	{
		if (*c->key > *shtn->key && !inserted)
		{
			shtn->sprev = c->sprev;
			shtn->snext = c;
			if (c->sprev)
				c->sprev->snext = shtn;
			else
				ht->shead = shtn;
			c->sprev = shtn;
			inserted = 1;
		}
		ht->stail = c;
		c = c->snext;
	}
	if (!inserted)
	{
		shtn->sprev = ht->stail;
		shtn->snext = NULL;
		ht->stail->snext = shtn;
		ht->stail = shtn;
	}
	return (1);
}
