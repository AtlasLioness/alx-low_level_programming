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
	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (ptr);
}
