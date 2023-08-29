#include "lists.h"

/**
* free_listint2 - function prototype that frees listint_t
* @head: head of the list.
*
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *heap_node;

	while (current != NULL)
	{
		heap_node = current;
		current = current->next;
		free(head_node);
	}
	*head = NULL;
}
