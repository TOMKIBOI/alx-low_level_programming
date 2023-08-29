#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a linkdt list.
* @head: head of the linkrd list.
* @n: character
*
* Return: retuns new node of the element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *old_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next =  NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	old_node = *head;
	while (old_node->next != NULL)
	{
		old_node = old_node->next;
	}

	old_node->next = n_node;

	return (n_node);
}
