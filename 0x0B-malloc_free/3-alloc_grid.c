#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates space for a 2D array of integers
 * @width: width of array
 * @height: hight of array
 *
 * Return: pointer to a 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width * height <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}

