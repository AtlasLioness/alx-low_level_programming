#include "lists.h"
/**
 * sum_listint - returns the sum of all the data n of listint_t list
 * @head: pointer to the listint_t linked list
 *
 * Return: sum of all data (n) or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		tmp = head;
		sum += tmp->n;
		head = tmp->next;
	}
	return (sum);
}
