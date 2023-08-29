#include "lists.h"

/**
 * sum_listint - function prototype that return the sum
 * of all the data of listint_t list.
 * @head: head of the listint_t.
 *
 * Return: returns the sumation of the data of listint_t.
 */

int sum_listint(listint_t *head)
{
	int Add = 0;

	while (head != NULL)
	{
		Add += head->n;
		head = head->next;
	}

	return (Add);
}
