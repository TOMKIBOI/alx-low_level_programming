#include "lists.h"

/**
* add_nodeint - add a new node at the beginning of a linkdt list
* @head: head of the linked list
* @n: character
*
* Return: returns new node element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;

	*head = node;
	return (node);
}
