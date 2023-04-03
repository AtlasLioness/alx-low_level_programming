#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square
 * matrix of integers
 * @a: square matrix of integers
 * @size: size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, cells;
	int sum = 0;

	cells = size * size;

	while (i < cells)
	{
		sum = sum + a[i];
		i += size + 1;
	}
	printf("%d, ", sum);

	j = cells - size;
	sum = 0;

	while (j >= size - 1)
	{
		sum = sum + a[j];
		j = j - size + 1;

	}
	printf("%d\n", sum);
}
