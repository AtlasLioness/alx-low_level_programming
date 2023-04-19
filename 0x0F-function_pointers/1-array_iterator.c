#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parmater
 * on each element of an array
 * @array: array that contains elements
 * @size: size of the array
 * @action: the function to execute on each element of array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
