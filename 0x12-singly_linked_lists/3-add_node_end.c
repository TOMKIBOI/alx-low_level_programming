#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: a pointer to the linked list
 * @str:  adds new string in the end of the node
 *
 * Return:  address of the new node, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *struct_node, *stor;

	if (str == NULL)
		return (NULL);

	struct_node = malloc(sizeof(list_t));
	if (struct_node == NULL)
		return (NULL);

	struct_node->str = strdup(str);
	if (struct_node->str == NULL)
	{
		free(struct_node);
		return (NULL);
	}

	struct_node->len = strlen(str);
	struct_node->next = NULL;

	if (*head == NULL)
	{
		*head = struct_node;
	}
	else
	{
		stor = *head;
		while (stor->next != NULL)
		{
			stor = stor->next;
		}
		stor->next = struct_node;
	}
	return (struct_node);
}
