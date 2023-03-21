#include "main.h"
/**
 * _abs - return absolute value of number
 * @n: number to test
 *
 * Return: n absolute value of number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}

/**
 * print_last_digit - prints last digit of a number
 * @n : number
 *
 * Return: last digit n
 */
int print_last_digit(int n)
{
	n = _abs(n) % 10;
	_putchar(n + '0');
	return (n);
}
