#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number or 0 if b is NULL or has a char that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		result = result << 1;
		if ((*b != '1') && (*b != '0'))
			return (0);
		else if (*b == '1')
			result = result | 1;
		b++;
	}
	return (result);
}
