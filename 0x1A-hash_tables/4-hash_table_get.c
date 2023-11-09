#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key index
 *
 * @ht: pointer to the hash table
 * @key: key of the hash tabble array
 * Return: value of the hash table.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k = k((unsigned char *)key, ht->size);

	temp = ht->array[k];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
