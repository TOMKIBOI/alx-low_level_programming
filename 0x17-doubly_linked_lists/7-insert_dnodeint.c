#include "lists.h"

/**
* insert_dnodeint_at_index - Insert a new node at a given position.
* @h: points to a pointer to the head of the list
* @idx: The index for the new node
* @n: value stored in the new node
* Return:- returns address of the new node,
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *currt = *h;
	unsigned int calculate = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;

	while (currt != NULL)
	{
		if (calculate == idx - 1)
		{
			n_node->next = currt->next;
			n_node->prev = currt;
			if (currt->next != NULL)
				currt->next->prev = n_node;
			currt->next = n_node;
			return (n_node);
		}
		currt = currt->next;
		calculate++;
	}
	free(n_node);
	return (NULL);
}
