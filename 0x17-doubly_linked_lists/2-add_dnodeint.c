#include "lists.h"

/**
* add_dnodeint - Add a new node at the beginning of a dlistint_t list
* @head: point to a pointer of head of the list
* @n: value stored in the new node
* Return: The address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	if (*head != NULL)
		(*head)->prev = n_node;

	*head = n_node;

	return (n_node);
}
