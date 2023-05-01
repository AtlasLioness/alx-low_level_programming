#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to nodes of the listint_t list
 * @idx: index where to add new node, starts at 0
 * @n: data to add in new node
 *
 * Return: pointer to the new node or NULL if failed or impossible
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *previous;
	listint_t *new_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	tmp = *head;

	while (i < idx && tmp != NULL)
	{
		previous = tmp;
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL && i < idx)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp;
	previous->next = new_node;

	return (new_node);
}
