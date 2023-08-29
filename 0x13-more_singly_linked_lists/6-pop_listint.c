#include "lists.h"

/**
* free_listint2 - function prototype that frees listint_t
* @head: head of the list.
*
*/
void free_listint2(listint_t **head)
{
	listint_t *cur_node = *head;
	listint_t *temp;

	while (cur_node != NULL)
	{
		temp = cur_node;
		cur_node = cur_node->next;
		free(temp);
	}
	*head = NULL;
}
