#include "lists.h"
/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: pointer to the listint_t list
 *
 * Return: number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	int counter = 1;

	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	counter += listint_len(h->next);
	return (counter);
}
