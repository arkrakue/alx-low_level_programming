#include "hash_tables.h"

/**
 * key_index - The function calculates and returns the index for a key passed.
 * @key: The key to get in the hash table.
 * @size: the size of the hash table
 * Return: index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	unsigned long int new_key = 0;

	new_key = hash_djb2((unsigned char *)key);
	index = new_key % size;
	return (index);
}
