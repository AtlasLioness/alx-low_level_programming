#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the list_t list
 * @str: string to duplicate and add to the new node
 *
 * Return: pointer to address of the new element or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *lastelement;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	end_node->len = len;
	end_node->str = strdup(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (*head);
	}
	else
		lastelement = *head;
	while (lastelement->next != NULL)
	{
		lastelement = lastelement->next;
	}
	lastelement->next = end_node;
	return (end_node);
}
