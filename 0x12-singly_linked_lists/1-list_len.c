#include <stdlib.h>
#include "lists.h"

/**
 * list_len - elements in a linked list
 * @h: pointer to a list
 *
 * Return: returns elemets count
 */

size_t list_len(const list_t *h)
{
	size_t elem_ count = 0;

	while (h != NULL)
	{
		elem_count++;
		h = h->next;
	}

	return (elem_count);
}
