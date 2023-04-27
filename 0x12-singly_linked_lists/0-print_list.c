#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to a list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 1;
	list_t print;

	if(h == NULL)
		return;

	if (h->str == NULL)
	{
		print.str = "(nil)";
		print.len = 0;
	}
	else
	{
		print.str = h->str;
		print.len = h->len;
	}
	printf("[%d] %s\n", print.len, print.str);
	if (h->next == NULL)
		return (1);
	counter += print_list(h->next);
	return (counter);
}
