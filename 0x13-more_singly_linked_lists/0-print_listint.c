#include "lists.h"

/**
* print_listint - outlays all the elements of list
* @h: points to the next node
*
* Return: should return nodes count.
*/
size_t print_listint(const listint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_count++;
	}
	return (n_count);
}
