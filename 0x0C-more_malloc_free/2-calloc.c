#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of array
 * @size: size of each eleement of array
 *
 * Return: pointer to new array or NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *a;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	p = (char *)a;
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (a);
}
