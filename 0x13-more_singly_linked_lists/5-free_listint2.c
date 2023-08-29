#include "lists.h"

/**
 * free_listint2 - prototype function that frees listint_t
 * @head: head of the list.
 *
 * Return: returns the saved node or NULL if it fails.
 */

void free_listint2(listint_t **head)
{
	listint_t *cur_hd;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		cur_hd = (*head)->next;
		free(*head);
		*head = cur_hd;
	}

	*head = NULL;
}
