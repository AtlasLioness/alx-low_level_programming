#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings follwoed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;
	char *str;

	va_start(pr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(pr);
	printf("\n");
}
