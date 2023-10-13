#include "lists.h"

/**
* dlistint_len - find the num of  elements in  dlistint_t list
* @h: points to the head of the dlistint_t list:wq
* Return: The number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
