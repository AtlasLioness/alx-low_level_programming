#include "main.h"
/**
 * rot13 - encodes a string in rot13
 * @src: string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *src)
{
	int i = 0;

	while (src[i])
	{
		while ((src[i] >= 'A' && src[i] <= 'Z') || (src[i] >= 'a' && src[i] <= 'z'))
		{
			if ((src[i] >= 'A' && src[i] <= 'M') || (src[i] >= 'a' && src[i] <= 'm'))
			{
				src[i] += 13;
				break;
			}
				src[i] -= 13;
				break;
		}
		i++;
	}
	return (src);
}
