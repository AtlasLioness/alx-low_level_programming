#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function that compares values
 *
 * Return: index of the first element for wich the cmp function
 * does not return 0. If no elements matches or size <=0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
