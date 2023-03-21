#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n : number
 *
 * Return: last digit n
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar(n + '0');
	}
	else
	{
		n = (n * (-1)) % 10;
		_putchar(n + '0');
	}
	return (n);
}
