#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *ptr = (unsigned char *) &i;

	if ((int) *ptr == 0)
		return (0);
	else
		return (1);
}
