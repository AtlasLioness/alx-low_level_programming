#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - calculates the sum of a and b
 * @a: first number
 * @b: second number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculates the difference of a and be
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculates the product of a and b
 * @a: first number
 * @b: second number
 *
 * Return: product of a and be
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculates division of a by b
 * @a: devidend
 * @b: divisor
 *
 * Return: result of the division (quotient)
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - calculates remainder of division of a by b
 * @a: devidend
 * @b: devisor
 *
 * Return: reminder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
