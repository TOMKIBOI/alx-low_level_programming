#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_tab;
	unsigned long int i;

	h_tab = malloc(sizeof(hash_table_t));
	if (h_tab == NULL)
		return (NULL);

	h_tab->size = size;
	h_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (h_tab->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		h_tab->array[i] = NULL;

	return (h_tab);
}
