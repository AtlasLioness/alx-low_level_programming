#include "main.h"
#include <stdlib.h>
/**
 * _strdup - creates new duplicated of str
 * @str: string to copy
 *
 * Return: pointer to new string or NULL if insufficient memory or str = NULL
 */
char *_strdup(char *str)
{
	int i = 0, j = 0, len = 0;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	a = malloc((len + 1) * sizeof(*str));

	if (a == NULL)
	{
		return (NULL);
	}
	while (j < len)
	{
		a[j] = *str;
		j++;
		str++;
	}
	a[i] = '\0';
	return (a);
}
