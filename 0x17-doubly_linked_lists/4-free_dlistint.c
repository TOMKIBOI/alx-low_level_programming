#include "lists.h"

/**
* free_dlistint - Free a dlistint_t list
* @head: A pointer to the head of the list
* Return: nothing to return
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currt;

	while (head != NULL)
	{
		currt = head;
		head = head->next;
		free(currt);
	}
}
