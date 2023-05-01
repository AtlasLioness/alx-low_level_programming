#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: pointer to the listint_t list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to node at specified index or NULL if does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	else
		return (tmp);
}
