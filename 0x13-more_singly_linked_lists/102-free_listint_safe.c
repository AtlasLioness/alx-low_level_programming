#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to nodes of listint_t list
 *
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	int dist;
	listint_t *tmp;
	size_t counter = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		dist = *h - (*h)->next;

		if (dist > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			counter++;
		}
		else
		{
			free(*h);
			*h = NULL;
			counter++;
			break;
		}
	}

	*h = NULL;
	return (counter);
}
