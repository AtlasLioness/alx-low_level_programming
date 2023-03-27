#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: input array
 * @n: number of elements to print
 *
 *
 */
void print_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		if (tmp != a[n - 1])
		{
			printf("%d, ", tmp);
		}
		else
		{
			printf("%d\n", tmp);
		}
	}
}
