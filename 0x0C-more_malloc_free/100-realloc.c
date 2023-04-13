#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of ptr
 * @new_size: size, in bytes of the new memory
 *
 * Return: pointer to new memory block, or ptr if new_size = old_size
 * or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old;
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			free(ptr);
		return (new);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	old = ptr;
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	free(ptr);
	return (new);
}
