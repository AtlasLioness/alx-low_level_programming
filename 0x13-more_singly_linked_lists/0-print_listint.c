#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t printer;
	size_t counter = 1;


	if (h == NULL)
		return (0);

	printer.n = h->n;

	printf("%d\n", printer.n);

	if (h->next == NULL)
		return (1);

	counter += print_listint(h->next);
	return (counter);
}
