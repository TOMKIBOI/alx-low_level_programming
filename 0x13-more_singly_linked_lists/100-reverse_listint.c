#include "lists.h"

/**
* reverse_listint - reverse a listint_t list.
* @head: head of listint_t list.
*
* Return: returns the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = previous_node;

		previous_node = *head;
		*head = temp;
	}

	*head = previous_node;
	return (*head);
}
