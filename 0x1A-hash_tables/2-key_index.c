#include "hash_tables.h"

/**
 * key_index - get the index of a key by mod operation
 * @key: key value
 * @size: size of the hash table
 * Return: index of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
