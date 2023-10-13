#include "lists.h"

/**
* get_dnodeint_at_index - Get the nth node of a dlistint_t list
* @head: A pointer to the head of the list
* @index: The index of the node to retrieve 
* Return: points the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int calculate = 0;

	while (head != NULL)
	{
		if (calculate == index)
			return (head);
		head = head->next;
		calculate++;
	}

	return (NULL);
}
