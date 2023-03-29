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
	int i;
	char *ptr;

	ptr = dest;
	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (ptr);
}

