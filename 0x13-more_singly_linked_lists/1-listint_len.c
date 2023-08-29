#include "lists.h"

/**
* listint_len - outlays the number of elements in the list
* @h: points the list
*
* Return: should return the number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
		h = h->next;
		n_count++;
	}
	return (n_count);
}
