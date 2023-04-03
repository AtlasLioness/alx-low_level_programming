#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: pointer to beginning of located needle
 * or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*haystack == needle[i])
			{
				if (needle[i + 1] != '\0')
				{
					return (haystack);
				}
				else
				{
					haystack++;
					continue;
				}
			}
			else
			{
				haystack++;
				break;
			}

		}
	}
	return (0);
}
