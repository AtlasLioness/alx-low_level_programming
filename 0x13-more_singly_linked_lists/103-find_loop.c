#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the linked list
 *
 * Return: pointer to node where the loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head;
	listint_t *b = head;

	if (head == NULL)
		return (NULL);

	while (a && b && b->next)
	{
		a = a->next;
		b = b->next->next;

		if (b == a)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (b);
		}
	}
	return (NULL);
}
