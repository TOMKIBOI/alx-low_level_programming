#include "lists.h"

/**
* free_list - frees a list
* @head: pointer to a list
* Return: nothing to return (0)
*/
void free_list(list_t *head)
{
	list_t *stor;

	while (head != NULL)
	{
		stor = head;
		head = head->next;
		free(stor->str);
		free(stor);
	}
}
