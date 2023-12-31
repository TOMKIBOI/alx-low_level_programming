#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a specific position.
* @head: the head of the listint_t
* @idx: position where the new node is to be added.
* @n: character
*
* Return: returns saved new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node;
	listint_t *cur_node;
	unsigned int c;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	cur_node = *head;
	for (c = 0; c < idx - 1; c++)
	{
		if (cur_node == NULL)
		{
			free(n_node);
			return (NULL);
		}
		cur_node = cur_node->next;
	}

	n_node->next = cur_node->next;
	cur_node->next = n_node;

	return (n_node);
}
