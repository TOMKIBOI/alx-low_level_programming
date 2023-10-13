#include "lists.h"

/**
* sum_dlistint - find the sum of all data (n) in a dlistint_t list
* @head: points to the head of the list
* Return: returns the sum of all data values, or 0 if null
*/
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
