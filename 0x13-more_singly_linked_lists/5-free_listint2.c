#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the listint_t list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
