#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits one would need to flip
 * to get from one number to another
 * @n: first number we start with
 * @m: the number we wish to get to
 *
 * Return: number of bits we need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int tracker = 0;
	unsigned int nlsb, mlsb;

	while ((n | m) != 0)
	{
		nlsb = n & 1;
		mlsb = m & 1;
		n = n >> 1;
		m = m >> 1;

		if (nlsb != mlsb)
			tracker += 1;
	}
	return (tracker);
}
