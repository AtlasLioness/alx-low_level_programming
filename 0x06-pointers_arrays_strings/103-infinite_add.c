#include "main.h"
/**
 * _add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of buffer r
 *
 * Return: pointer to the result or 0 if result cannot be stored
 */
char *_add(char *n1, char *n2, char *r, int r_index)
{
	int sum, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		sum = (*n1 - '0') + (*n2 - '0');
		sum += tens;
		r[r_index] = (sum % 10) + '0';
		tens = sum / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		sum = (*n1 - '0') + tens;
		r[r_index] = (sum % 10) + '0';
		tens = sum / 10;
	}
	for (; *n2; n2--, r_index--)
	{
		sum = (*n2 - '0') + tens;
		r[r_index] = (sum % 10) + '0';
		tens = sum / 10;
	}
	if (tens >= 0 && r_index >= 0)
	{
		r[r_index] = (tens % 10) + '0';
		return (r + r_index);
	}
	else if (tens && r_index < 0)
	{
		return (0);
	}
	else
		return (r + r_index + 1);
}
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r : buffer where the result is tored
 * @size_r : size of buffer r
 *
 * Return: pointer to result or 0 if cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, a = 0, b = 0;

	for (index = 0; *(n1 + index); index++)
	{
		a++;
	}
	for (index = 0; *(n2 + index); index++)
	{
		b++;
	}
	if (size_r < a + 1 || size_r < b + 1)
	{
		return (0);
	}
	n1 += a - 1;
	n2 += b - 1; 
	r[size_r] = '\0';
	return (_add(n1, n2, r, --size_r));
}
