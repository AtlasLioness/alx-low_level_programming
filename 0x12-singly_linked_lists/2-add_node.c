#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: pointer to list_t list
 * @str: string to duplicate in new node
 *
 * Return: address of the new element or NULL if failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
