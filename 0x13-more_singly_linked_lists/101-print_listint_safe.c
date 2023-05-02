#include "lists.h"
#include <stdlib.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to listint_t linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	long int dist;
	listint_t *now;
	int counter = 0;

	now = (listint_t *)head;

	while (now)
	{
		dist = now - (now->next);
		counter++;
		printf("[%p] %d\n", (void *)now, now->n);
		if (dist > 0)
			now = now->next;
		else
		{
			printf("-> [%p] %d\n", (void *)now->next, now->next->n);
			break;
		}
	}
	return (counter);
}
