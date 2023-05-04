#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: unsigned int number
 * or 0 if b is NULL or has other chars than 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, len = 0;
	unsigned int conv = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] > 49 || b[len] < 48)
			return (0);
		len++;
	}
	for (i = len - 1, j = 0; i >= 0 && j < len; i--, j++)
	{
		conv += (b[j] - '0') * (1 << i);
	}
	return (conv);
}
