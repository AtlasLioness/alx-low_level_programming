#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the bit to set (starting from 0)
 *
 * Return: 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitsize;
	int clear;

	bitsize = sizeof(unsigned long int) * 8;

	if (index > bitsize - 1)
		return (-1);
	clear = 1 << index;
	*n = *n & (~clear);
	return (1);
}
