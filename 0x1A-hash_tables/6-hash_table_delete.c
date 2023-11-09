#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table
* @ht: The hash table to be deleted
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *current, *next;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		current = ht->array[x];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array);
	free(ht);
}
