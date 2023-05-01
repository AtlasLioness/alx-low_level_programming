#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delets node at index of listint_t linked list
 * @head: pointer to nodes of a listint_t linked list
 * @index: index of node to delete, start at 0
 *
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next;
	listint_t *here;
	listint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	here = *head;
	while (i < index)
	{
		if (here == NULL || here->next == NULL)
			return (-1);
		next = here->next;
		if (i == (index - 1))
			break;
		here = next;
		i++;
	}

	tmp = next;
	here->next = tmp->next;
	free(next);
	return (1);
}
