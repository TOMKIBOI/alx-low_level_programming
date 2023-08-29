#include "lists.h"

/**
* free_listint - function prototype that frees the linked listint_t.
* @head: head of list
*
*/
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *heap_node;

	while (current != NULL)
	{
		heap_node = current;
		current = current->next;
		free(heap_node);
	}
}
