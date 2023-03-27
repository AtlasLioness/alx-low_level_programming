#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: input string
 *
 *
 */
void puts2(char *str)
{
	int i;
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
