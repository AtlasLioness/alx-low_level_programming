#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers folloed by new line
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (separator == NULL || n <= 0)
		return;
	va_start(num, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(num, int));
		printf("%c ", *separator);
	}
	printf("%d\n", va_arg(num, int));
}
