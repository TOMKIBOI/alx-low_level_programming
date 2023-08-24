#include <stdio.h>
#include "lists.h"

/**
* print_list - prints elements of lists
* @h: pointer to a list.
*
* Return: The total number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t elem_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		elem_count++;
		h = h->next;
	}

	return (elem_count);
}
