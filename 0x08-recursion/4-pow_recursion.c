#include "main.h"
/**
 * _pow_recursion - calculate value of x raised to the power of y
 * @x: number
 * @y: power
 *
 * Return: value or -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
