#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string or NULL on failure to concatenate
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	int x, y;
	char *a;

	if (s1 == NULL)
		len1 = 0;
	else
		while (s1[i] != '\0')
		{
		len1++;
		i++;
		}
	if (s2 == NULL)
		len2 = 0;
	else
		while (s2[j] != '\0')
		{
		len2++;
		j++;
		}
	a = malloc((len1 + len2 + 1) * sizeof(*s1));
	if (a == NULL)
		return (NULL);
	for (i = 0, x = 0; i < len1; i++, x++)
	{
		a[i] = s1[x];
	}
	for (y = 0; i < len1 + len2; i++, y++)
	{
		a[i] = s2[y];
	}
	a[i] = '\0';
	return (a);
}
