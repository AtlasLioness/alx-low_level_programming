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
	int i, j, pcells;
	int sum = 0;
	int *p = a;

	pcells = size * size;

	while (i < pcells)
	{
		sum = sum + p[i];
		i += size + 1;
	}
	printf("%d, ", sum);

	j = pcells - size;
	sum = 0;

	while (j >= size - 1)
	{
		sum = sum + p[j];
		j = j - size + 1;

	}
	printf("%d\n", sum);
}
