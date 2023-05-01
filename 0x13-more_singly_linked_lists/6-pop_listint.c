#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the listint_t list
 *
 * Return: pointer to the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	i = tmp->n;
	free(tmp);
	return (i);
}
