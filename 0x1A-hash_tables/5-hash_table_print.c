#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp;
	char *s;

	if (ht == NULL)
		return;

	printf("{");
	s = "";

	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", s, temp->key, temp->value);
			s = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
