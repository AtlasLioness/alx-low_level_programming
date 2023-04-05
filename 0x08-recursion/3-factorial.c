#include "main.h"
/**
 * factorial - gives factorial of number
 * @n : number
 *
 * Return: factorial of n OR 0 if n < 0 or -1 if error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
