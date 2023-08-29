#include "lists.h"

/**
 * listint_ *get_nodeint_at_index - function ptototype that frees a listint_t
 * @head: head of the linked list
 *
 * @index: number place of the node to return.
 * Return: returns the saved node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur_hd = head;
	unsigned int c = 0;

	while (cur_hd && c < index)
	{
		cur_hd = cur_hd->next;
		c++;
	}

	return (cur_hd);
}
