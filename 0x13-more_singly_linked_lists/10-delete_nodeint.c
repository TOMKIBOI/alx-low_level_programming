#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at specific index o.f a listint_t.
* @head: head of the listint_t list.
* @index: index where minimum value of the node that should be deleted .
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *cur_node;
	listint_t *delete_node;
	unsigned int c;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	cur_node = *head;
	for (c = 0; c < index - 1; c++)
	{
		if (cur_node == NULL || cur_node->next == NULL)
		{
			return (-1);
		}
		cur_node = cur_node->next;
	}

	delete_node = cur_node->next;
	cur_node->next = delete_node->next;
	free(delete_node);
	return (1);
}
