#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t
* @head: head of the listint
*
* Return: returns node's data
*/
int pop_listint(listint_t **head)
{
	int Pdata;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	Pdata = temp->n;
	*head = (*head)->next;
	free(temp);

	return (Pdata);
}
