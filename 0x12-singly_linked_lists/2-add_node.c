#include "lists.h"
#include <stdlib.h>
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
	size_t n = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[n] != '\0')
	{
		n++;
	}
	new_node->len = n;
	new_node->str = malloc(sizeof(char) * (n + 1));
	if (new_node->str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
	{
		new_node->str[n] = str[n];
	}
	new_node->str[n] = '\0';
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
