#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: input string
 *
 *
 */
void print_rev(char *s)
{
	int i;
	int lenght = 0;
	char *p = s;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(*(p + i));
	}
	_putchar('\n');
}
