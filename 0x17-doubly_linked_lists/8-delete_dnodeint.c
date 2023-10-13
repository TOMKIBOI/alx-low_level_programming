#include "lists.h"

/**
* delete_dnodeint_at_index - Delete the node at a given index.
* @head: points to a pointer to the head of the list
* @index: index of the node to be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currt = *head;
	unsigned int calculate = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = currt->next;
		if (currt->next != NULL)
			currt->next->prev = NULL;
		free(currt);
		return (1);
	}

	while (currt != NULL)
	{
		if (calculate == index)
		{
			if (currt->next != NULL)
				currt->next->prev = currt->prev;
			if (currt->prev != NULL)
				currt->prev->next = currt->next;
			free(currt);
			return (1);
		}
		currt = currt->next;
		calculate++;
	}

	return (-1);
}
