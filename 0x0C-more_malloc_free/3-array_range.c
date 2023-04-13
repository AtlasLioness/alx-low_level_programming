#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers with values from min to max
 * @min: minimum value contained in array
 * @max: maximum value contained in array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, range;
	int *a;

	if (min > max)
		return (NULL);
	range = max - min;
	a = malloc((range + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; (i <= range) && (min <= max); i++, min++)
		a[i] = min;

	return (a);
}
