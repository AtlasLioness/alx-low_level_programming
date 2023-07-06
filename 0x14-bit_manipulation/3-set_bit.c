#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number in decimal base
 * @index: index of the bit to set (starting from 0)
 *
 * Return: 1 if it worked, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitsize;
	int seth;

	bitsize = sizeof(unsigned long int) * 8;

	if (index > bitsize - 1)
		return (-1);
	seth = 1 << index;
	*n = *n | seth;
	return (1);
}
