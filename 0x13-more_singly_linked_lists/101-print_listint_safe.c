#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints alinked_l list.
 * @head: *p first node of the list.
 *
 * Return: returns 98 if failed.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slo = head;
	const listint_t *fas = head;
	size_t count = 0;

	while (slo != NULL && fas != NULL && fas->next != NULL)
	{
		printf("[%p] %d\n", (void *)slo, slo->n);
		slo = slo->next;
		fas = fas->next->next;
		count++;

		if (slo == fas)
		{
			printf("[%p] %d\n", (void *)slo, slo->n);
			printf("-> [%p] %d\n", (void *)fas->next, fas->next->n);
			exit(98);
		}
}
	while (head != slo)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	printf("[%p] %d\n", (void *)slo, slo->n);
	count++;

	return (count);
}
