#include "main.h"
/**
 * _strncpy - copies a string
 * @dest : string destination
 * @src : source string
 * @n : bytes to use from src
 *
 * Return: pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	int a;
	char *ptr;

	ptr = dest;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		j++;
	}
	for (a = 0; a < j; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (ptr);
}
