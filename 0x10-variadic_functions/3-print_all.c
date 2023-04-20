#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format : list of types of arguments passed
 *
 */
void print_all(const char * const format, ...)
{
	va_list print;
	int len = 0;
	char *sep;
	char *str;

	va_start(print, format);
	sep = "";

	if (format)
	{
		while (format[len] != '\0')
		{
			switch (format[len])
			{
				case 'c':
					printf("%s%c", sep, va_arg(print, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(print, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(print, double));
					break;
				case 's':
					str = va_arg(print, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					len++;
					continue;
			}
			sep = ", ";
			len++;
		}
	}
	va_end(print);
	printf("\n");
}
