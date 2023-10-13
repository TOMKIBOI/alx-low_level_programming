#include "lists.h"

/**
* add_dnodeint_end - Add a new node at the end of a dlistint_t list
* @head: points to a pointer to the head of the list
* @n: value stored in the new node
* Return: returns address of the new element,
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *tmp = *head;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = n_node;
	n_node->prev = tmp;

	return (n_node);
}
