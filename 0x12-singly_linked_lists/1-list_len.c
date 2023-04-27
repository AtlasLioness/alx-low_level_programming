#include "lists.h"
/**
 * list_len - returns number of elements in a linked list_t list
 * @h: pointer to a list_t list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	int counter = 1;

	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	counter += list_len(h->next);
	return (counter);
}
