#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 *
 */
void rev_string(char *s)
{
	int i, lenght = 0;
	char tmp = s[0];

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i < lenght; i++)
	{
		lenght--;
		tmp = s[i];
		s[i] = s[lenght];
		s[lenght] = tmp;
	}
}

