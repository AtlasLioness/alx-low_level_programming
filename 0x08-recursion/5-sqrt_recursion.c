#include "main.h"
/**
 * _sqrt_recursion - gives natural square root of a number
 * @n: input number
 *
 * Return: natural square root of n or -1 if n doesn't have
 * a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (help_sqrt_rec(n, 0));
}
/**
 * help_sqrt_rec - searches for square factors to return square root
 * @n : number
 * @h: factor
 *
 * Return: square root or -1 if square of h > n (out of range)
 */
int help_sqrt_rec(int n, int h)
{
	if (h * h > n)
	{
		return (-1);
	}
	if (h * h == n)
	{
		return (h);
	}
	return (help_sqrt_rec(n, h + 1));
}
