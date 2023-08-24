#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: a pointer to the linked list
 * @str:  adds new string in the begining of the node
 *
 * Return:  address of the new node, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *stnew_node = (list_t *)malloc(sizeof(list_t));

	if (stnew_node == NULL)

		return (NULL);

	stnew_node->str = strdup(str);

	if (stnew_node->str == NULL)
	{

		free(stnew_node);
		return (NULL);
	}

	stnew_node->next = *head;
	*head = stnew_node;

	return (stnew_node);
}
