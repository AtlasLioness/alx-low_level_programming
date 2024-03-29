#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of the list of elements to print
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
