#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of the bit to get (starting from 0)
 *
 * Return: int value of bit or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitsize;
	unsigned long int new;

	bitsize = sizeof(unsigned long int) * 8;

	if (index > bitsize - 1)
		return (-1);
	if (index == 0)
		return (n & 1);
	new = get_bit(n >> 1, index - 1);
	return (new);

}
