#include "hash_tables.h"

/**
 * key_index - func prototype Gives the index of a key in a hash table.
 * @key: The key, a string.
 * @size: The size of the array of the hash table.
 *
 * Return: Index key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
